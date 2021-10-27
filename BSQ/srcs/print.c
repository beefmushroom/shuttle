/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:40:24 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/26 16:43:36 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	modify_map(t_map *map, t_sqr *sqr)
{
	int		i;
	int		j;
	char	full;

	full = map->full;
	i = sqr->y - sqr->len;
	while (++i <= sqr->y)
	{
		j = sqr->x - sqr->len;
		while (++j <= sqr->x)
			map->arr[i][j] = full;
	}
}

void	print(t_map *map, t_sqr *sqr)
{
	int	i;

	modify_map(map, sqr);
	i = -1;
	while (++i < map->y_len)
	{
		write(1, map->arr[i], map->x_len);
		write(1, "\n", 1);
	}
}
