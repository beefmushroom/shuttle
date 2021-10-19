/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:48:20 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/19 09:52:59 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (power-- > 0)
		return (nb * ft_iterative_power(nb, power));
	return (0);
}
