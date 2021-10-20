/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:09:59 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/19 17:13:20 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putfile(char *str)
{
	char	*name;

	name = str;
	while (*name)
	{
		write(1, name, 1);
		name++;
	}
}

int	main(int argc, char **argv)
{
	int	rev_index;

	rev_index = argc - 1;
	while (rev_index > 0)
	{
		ft_putfile(argv[rev_index]);
		write(1, "\n", 1);
		rev_index--;
	}
	return (0);
}
