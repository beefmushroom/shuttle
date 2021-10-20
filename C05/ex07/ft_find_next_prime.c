/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:25:20 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/19 10:41:45 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	s;

	s = 2;
	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	while (s <= nb / s)
	{
		if (nb % s == 0)
			return (0);
		s++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	check;

	check = ft_is_prime(nb);
	if (check == 1)
		return (nb);
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
