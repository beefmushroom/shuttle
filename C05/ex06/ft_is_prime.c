/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:04:10 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/19 10:23:22 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	s;

	s = 2;
	if (nb <= 1)
		return (0);
	else if (nb <= 3)
		return (1);
	while (s <= nb / s)
	{
		if ((nb % s) == 0)
			return (0);
		s++;
	}
	return (1);
}
