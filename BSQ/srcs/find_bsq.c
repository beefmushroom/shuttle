/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_bsq.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:17:19 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/26 16:39:06 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_sqr	*find_bsq(t_map *map)
{
	int		i;
	int		**arr;
	t_sqr	*sqr;

	sqr = malloc(sizeof(t_sqr));
	if (!sqr)
		exit(0);
	arr = make_arr(map);
	change_sqr(sqr, -1, -1, 0);
	i = -1;
	while (++i < map->y_len)
		find_bsq_sub(i, map, arr, sqr);
	i = 0;
	while (i < map->y_len)
		free(arr[i++]);
	free(arr);
	return (sqr);
}

int	**make_arr(t_map *map)
{
	int	i;
	int	j;
	int	**tmp_arr;

	tmp_arr = malloc(sizeof(int *) * (map->y_len));
	if (!tmp_arr)
		exit(0);
	i = 0;
	while (i < map->y_len)
	{
		tmp_arr[i] = malloc(sizeof(int) * (map->x_len));
		if (!tmp_arr[i])
			exit(0);
		j = 0;
		while (j < map->x_len)
		{
			if (map->arr[i][j] == map->obstacle)
				tmp_arr[i][j] = 0;
			else
				tmp_arr[i][j] = 1;
			j++;
		}
		i++;
	}
	return (tmp_arr);
}

void	change_sqr(t_sqr *sqr, int x, int y, int len)
{
	sqr->x = x;
	sqr->y = y;
	sqr->len = len;
}

void	find_bsq_sub(int i, t_map *map, int **arr, t_sqr *sqr)
{
	int	j;
	int	len;

	j = -1;
	while (++j < map->x_len)
	{
		if (i == 0 || j == 0)
		{
			if (cmp(sqr->len, arr[i][j]))
				change_sqr(sqr, j, i, arr[i][j]);
		}
		if (i == 0 || j == 0)
			continue ;
		if (arr[i][j] == 1)
		{
			len = check_sqr(arr, i, j);
			if (cmp(sqr->len, len))
				change_sqr(sqr, j, i, len);
		}
	}
}

int	check_sqr(int **arr, int i, int j)
{
	int	min;
	min = ft_min(arr[i - 1][j], arr[i - 1][j - 1], arr[i][j - 1]);
	arr[i][j] = min + 1;
	return (min + 1);
}
