/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:14:31 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/20 12:06:58 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	strcmp(char *str1, char *str2)
{
	int	idx;

	idx = 0;
	while (str1[idx] == str2[idx])
	{
		idx++;
	}
	return (str1[idx] - str2[idx]);
}

void	print(int argc, char **argv)
{
	char	buf;
	int		i;
	int 	j;

	i = 1;
	while (i < argc - 1)
	{
		j = 0;
		while (argv[i][j])
		{
			buf = argv[i][j] + '0';
			write(1, &buf, 1);
		}
		i++;
		write(1, " ", 1);
	}
}


int main(int argc, char **argv)
{
	int	i;
	int j;
	char *tmp;

	i = 1
	while (i < argc - 1)
	{
		j = 0;
		while (j < argc - 1 - i)
		{
			if (strcmp(argv[j], argv[j + 1]) > 0)
			{
				tmp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = argv[j];
			}
			j++;
		}
		i++;
	}
	print(argc, argv);
	return (0);
}
