/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:45:16 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/19 15:06:54 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int row, int *b)
{
	char	buf;
	int		j;

	if (row == 1)
	{
		j = 0;
		while (j < 10)
		{
			buf = b[j] + '0';
			write(1, &buf, 1);
			j++;
		}
	}
	else
	{
		write(1, "\n", 1);
		j = 0;
		while (j < 10)
		{
			buf = b[j] + '0';
			write(1, &buf, 1);
			j++;
		}
	}
}

int	ft_promising(int *b, int x, int y)
{
	int	j;

	j = 0;
	while (j < x)
	{
		if (y == b[j])
			return (0);
		if (j + b[j] == x + y)
			return (0);
		if (j - b[j] == x - y)
			return (0);
		j++;
	}
	return (1);
}

void	ft_pruning(int *b, int *row, int col)
{
	int	i;

	if (col == 10)
	{
		*row += 1;
		ft_print(*row, b);
	}
	else
	{
		i = 0;
		while (i < 10)
		{
			if (ft_promising(b, col, i))
			{
				b[col] = i;
				ft_pruning(b, row, col + 1);
			}
			i++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	b[10];
	int	i;
	int	row;

	i = 0;
	while (i < 10)
	{
		b[i] = -1;
		i++;
	}
	row = 0;
	ft_pruning(b, &row, 0);
	write(1, "\n", 1);
	return (row);
}
