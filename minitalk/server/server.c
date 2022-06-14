/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:34:03 by sungjuki          #+#    #+#             */
/*   Updated: 2022/06/14 12:55:11 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"

int	main(void)
{
	write(1, "Server PID : ", 13);
	ft_putnbr_fd(getpid(), 1);
	write(1, "\n", 1);
	signal(SIGUSR1, server_get_bytes);
	signal(SIGUSR2, server_get_bytes);
	while (1)
		pause();
}

void	server_get_bytes(int sig)
{
	static char	char_tmp;
	static int	len_bit;

	if (sig == SIGUSR1)
	{
		char_tmp |= 0;
		if (len_bit < 7)
			char_tmp <<= 1;
	}
	else if (sig == SIGUSR2)
	{
		char_tmp |= 1;
		if (len_bit < 7)
			char_tmp <<= 1;
	}
	len_bit++;
	if (len_bit == 8)
	{
		write(1, &char_tmp, 1);
		len_bit = 0;
		char_tmp = 0;
	}
}
