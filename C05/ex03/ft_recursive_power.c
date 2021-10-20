/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:28:53 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/19 09:48:23 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (power-- > 0)
		return (nb * ft_recursive_power(nb, power));
	return (0);
}
