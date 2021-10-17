/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_v2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 09:36:33 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/17 22:17:54 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	puzzle_set(char *str);

int	main(int argc, char *argv[])
{
	if (argc == 2){
		puzzle_set(argv[1]);
	}
	return (0);
}
