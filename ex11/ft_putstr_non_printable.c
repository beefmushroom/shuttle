/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:47:29 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/14 15:47:34 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_convert(unsigned char str)
{
	char	*hex;
	char	c_str[2];

	hex = "0123456789abcdef";
	c_str[0] = hex[str / 16];
	c_str[1] = hex[str % 16];
	write(1, "\\", 1);
	write(1, &c_str[0], 1);
	write(1, &c_str[1], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		if (str[idx] < 32 || str[idx] > 126)
		{
			ft_convert(str[idx]);
		}
		else
		{
			write(1, &str[idx], 1);
		}
		idx++;
	}
}
