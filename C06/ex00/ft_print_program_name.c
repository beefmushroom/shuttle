/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:42:28 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/19 16:51:07 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*name;

	if (argc > 0)
	{
		name = argv[0];
		while (*name)
		{
			write(1, name, 1);
			name++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
