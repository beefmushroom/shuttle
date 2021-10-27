/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:35:02 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/26 16:01:09 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*expand_info(char *src, int	*size)
{
	char	*info;

	info = malloc(*size * 2);
	if (!info)
		exit(0);
	ft_strncpy(info, src, *size);
	*size *= 2;
	free(src);
	return (info);
}

int	ft_is_number(char c)
{
    if('0' <= c && c <= '9')
        return (1);
    return (0);
}

int	ft_atoi(char *str)
{
	int	num;

	if (*str == '0')
		return (0);
	num = 0;
	while (*str)
	{
		if (!ft_is_number(*str))
			return (0);
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num);
}

int	ft_is_valid_map(char *line, t_map *map)
{
	while (*line)
	{
		if (*line != map->empty && *line != map->obstacle)
			return (0);
		line++;
	}
	return (1);
}




