/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:17:09 by sungjuki          #+#    #+#             */
/*   Updated: 2022/06/13 15:19:48 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client.h"

int	main(int argc, char **argv)
{
	pid_t	pid;

	if (argc != 3)
	{
		write(1, "Invalid argc\n", 13);
		exit(1);
	}
	pid = ft_atoi(argv[1]);
	if (pid < 101 || pid > 99999)
	{
		write(1, "Invalid PID\n", 12);
		exit(1);
	}
	client_send_bytes(pid, argv[2]);
}
