/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:23:05 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/26 15:57:21 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int    read_map_sub(int *idx, t_map *map, char *line)
{
    int len;

    if (*idx == map->y_len || !ft_is_valid_map(line, map))
    {
        free(line);
        free_map(map, *idx);
        return (0);
    }
    len = ft_strlen(line);
    if (map->x_len == 0)
        map->x_len = len;
    if (len != map->x_len)
    {
        free_line(line);
        free_map(map, *idx);
        return (0);
    }
    map->arr[(*idx)++] = line;
    return (1);
}

t_map	*read_map(int fd)
{
	t_map	*map;

	map = (t_map *)malloc(sizeof(t_map));
	if (!map)
		exit(0);
	if (!parse_map_info(map, read_line(fd)))
		return (0);
	map->arr = (char **)malloc(sizeof(char *) * map->y_len);
	if (!map->arr)
		exit(0);
	if (!make_map(map, fd))
		return (0);
	return (map);
}

char	*read_line(int fd)
{
	char	*line;
	char	buf;
	int		idx;
	int		size;

	idx = 0;
	size = 2;
	line = (char *)malloc(size);
	if (!line)
		exit(0);
	while (read(fd, &buf, 1))
	{
		if (buf == '\n')
		{
			line[idx] = 0;
			break ;
		}
		if (idx + 1 == size)
			line = expand_info(line, &size);
		line[idx++] = buf;
	}
	if (idx == 0)
		return (free_line(line));
	return (line);
}

t_map    *read_stdin(void)
{
    return (read_map(0));
}

t_map    *read_file(char *file)
{
    int    fd;
    fd = open(file, O_RDONLY);
    if (fd == -1)
        return (0);
    return (read_map(fd));
}
