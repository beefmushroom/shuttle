/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:51:56 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/19 17:08:22 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	char	*name;

	name = str;
	while (*name)
	{
		write(1, name, 1);
		name++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	idx;

	idx = 1;
	while (idx < argc)
	{
		ft_putchar(argv[idx]);
		idx++;
	}
	return (0);
}
