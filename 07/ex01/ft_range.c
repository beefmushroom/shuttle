/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:03:27 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/21 10:27:29 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	range = (int *)malloc((sizeof(int) * size));
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
