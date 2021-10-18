/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 09:29:36 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/18 10:05:05 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i + 1] == 0)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
		{
			return (1);
		}
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
				j++;
		}
		i++;
	}
	return (0);
}

int	base_len(char *base)
{
	int	len;

	len = 0;
	while (base[len])
	{
		len++;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char			*b;
	int				len;
	unsigned int	n;

	b = base;
	len = base_check (b);
	if (len)
		return ;
	len = base_len (base);
	if (nbr < 0)
	{
		n = -nbr;
		write(1, "-", 1);
	}
	if (nbr > len)
		ft_putnbr ((nbr / len), base);
	write(1, base[nbr % len], 1);
}
