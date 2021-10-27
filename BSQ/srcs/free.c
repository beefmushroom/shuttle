/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:25:24 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/26 17:27:50 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	free_map(t_map *map, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		free(map->arr[i]);
	free(map->arr);
	free(map);
}

char	*free_line(char *line)
{
	free(line);
	return (0);
}
