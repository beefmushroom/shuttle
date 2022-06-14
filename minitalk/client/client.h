/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.k       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:10:18 by sungjuki          #+#    #+#             */
/*   Updated: 2022/06/13 15:12:46 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_H
# define CLIENT_H

# include <signal.h>
# include "../libft/libft.h"

/*
 *		function to send bits (len & str)
 */
void	client_send_bytes(int pid, char *str);

/*
 *		function to connect & init
 */
void	kill_and_pause(pid_t pid, int signo);

#endif
