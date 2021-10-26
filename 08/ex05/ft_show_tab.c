/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 09:51:41 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/26 09:51:49 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	ft_putsize(int size)
{
	int		div;
	int		mod;
	char	buf;

	div = size / 10;
	mod = size % 10;
	if (div != 0)
		ft_putsize(div);
	buf = mod % 10 + '0';
	write(1, &buf, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str)
	{	
		ft_putstr(par[i].str);
		ft_putsize(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		i++;
	}	
}
