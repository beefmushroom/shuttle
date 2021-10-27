/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:07:31 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/26 16:16:17 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int    is_printable(char c)
{
    if (' ' <= c && c <= '~')
        return (1);
    return (0);
}

int    is_valid_map_info(t_map *map)
{
    if (is_printable(map->full)
        && is_printable(map->obstacle)
        && is_printable(map->empty))
        return (1);
    else
        return (0);
}

int    parse_map_info_sub(t_map *map, char *info)
{
    int    len;

    len = ft_strlen(info);
    if (!info || (len < 4))
        return (0);
    map->full = info[len - 1];
    map->obstacle = info[len - 2];
    map->empty = info[len - 3];
    if (map->empty == map->obstacle
        || map->empty == map->full
        || map->obstacle == map->full
        || !is_valid_map_info(map))
        return (0);
    info[len - 3] = 0;
    map->y_len = ft_atoi(info);
    if (map->y_len == 0)
        return (0);
    return (1);
}

int	parse_map_info(t_map *map, char *info)
{
	int	line;
	line = parse_map_info_sub(map, info);
	if (!line)
		free(map);
	free(info);
	return (line);
}

int	make_map(t_map *map, int fd)
{
	int		y_read_num;
	char	*line;

	y_read_num = 0;
	map->x_len = 0;
	line = read_line(fd);
	while (line)
	{
		if (!read_map_sub(&y_read_num, map, line))
			return (0);
		line = read_line(fd);
	}
	if (y_read_num != map->y_len)
	{
		free_map(map, y_read_num);
		return (0);
	}
	return (1);
}
