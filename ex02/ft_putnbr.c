/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:25:28 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/14 16:50:15 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		div;
	int		mod;
	char	buf;

	div = nb / 10;
	mod = nb % 10;
	if (nb < 0)
	{
		write(1, "-", 1);
		div = -div;
		mod = -mod;
	}
	if (div != 0)
	{
		ft_putnbr(div);
	}
	buf = mod + '0';
	write(1, &buf, 1);
}
