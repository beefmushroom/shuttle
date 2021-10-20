/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 09:22:09 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/20 09:40:19 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_queens(int *queens_pos)
{
	int		i;
	char	buf;

	i = 0;
	while (i < 10)
	{
		buf = queens_pos[i] + '0';
		write(1, &buf, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	valid_location(int *queens_pos, int queen_num)
{
	int	i;

	i = queen_num - 1;
	while (i >= 0)
	{
		if (queens_pos[i] - queens_pos[queen_num] == 0)
			return (0);
		if (queens_pos[i] - queens_pos[queen_num] == i - queen_num)
			return (0);
		if (queens_pos[i] - queens_pos[queen_num] == queen_num - i)
			return (0);
		i--;
	}
	return (1);
}

void	queens_location(int	*queens_pos, int queen_num, int *count)
{
	int	position;

	if (queen_num == 10)
	{
		print_queens(queens_pos);
		*count += 1;
		return ;
	}
	else
	{
		position = 0;
		while (position < 10)
		{
			queens_pos[queen_num] = position++;
			if (valid_location(queens_pos, queen_num))
				queens_location(queens_pos, queen_num + 1, count);
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	queens_pos[10];
	int	count;
	int	queen_num;

	queen_num = 0;
	count = 0;
	queens_location(queens_pos, queen_num, &count);
	return (count);
}
