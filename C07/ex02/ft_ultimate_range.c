/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:21:15 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/21 10:37:42 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL)
		return (-1);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (i);
}
