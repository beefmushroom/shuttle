/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle_check_v2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 11:44:01 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/17 22:18:02 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

extern	char	size;

//전체 확인 함수
int	ft_chek (int row, int col, char **puzzle);
void	ft_put_puzzle(char **puzzle);

//숫자 중복 확인 함수
int	ft_overlap_check(int row, int col, char **puzzle, int val)
{
	int i;
	int j;

	i = 0;
	while (i <= row)
	{
		if(puzzle[i][col] == val + '0')
		{
			return (0);
		}
		i++;
	}
	j = 0;
	while (j <= col)
	{
		if(puzzle[row][j] == val + '0')
		{
			return (0);
		}
		j++;
	}
	return (1);
}

//row 조건 확인 함수
int	ft_row_check(int row, char **puzzle, char **question)
{
	int	i;
	int	max;
	int	count;

	max = 0;
	i = 0;
	count = 0;
	while (i < size) // 0 ~ size-1번 까지 / row_left랑 비교  
	{
		if (max < puzzle[row][i])
		{
			max = puzzle[row][i];
			count++;
		}
		i++;
	}
	if (count+'0' != question[2][row])
	{
		return (0);
	}
	max = 0;
	i = size -1;
	count = 0;
	while (i >= 0) // size-1 ~ 0 까지 / row_right 비교
	{
		if (max < puzzle[row][i])
		{
			max = puzzle[row][i];
			count++;
		}
		i--;
	}
	if (count+'0' != question[3][row])
	{
		return (0);
	}
	return (1);
}

//col  조건 확인 함수
int	ft_col_check(int col, char **puzzle, char **question)
{
	int	i;
	int	max;
	int	count;
	max = 0;
	count = 0;
	i = 0;
	while (i < size)
	{
		if (max < puzzle[i][col])
		{
			max = puzzle[i][col];
			count++;
		}
		i++;
	}
	if (count+'0' != question[0][col])
	{
		return (0);
	}
	max = 0;
	count = 0;
	i = size -1;
	while (i >= 0)
	{
		if (max < puzzle[i][col])
		{
			max = puzzle[i][col];
			count++;
		}
		i--;
	}
	if (count+'0' != question[1][col])
	{
		return (0);
	}
	return (1);
}



void	puzzle_bt(int row, int col, char **puzzle, char **question)
{
	int	i;

	if (col == size)
	{
		row += 1;
		col = 0;
	}
	if (row == size)
	{
		ft_put_puzzle(puzzle);
		write(1, "----", 4);
		write(1, "\n", 1);
		return ;
	}

	i = 1;
	while (i <= size)
	{
		if(ft_overlap_check(row, col, puzzle, i) == 1)
		{
			puzzle[row][col] = i + '0';
			if (row == size - 1) // row 사이즈가 full! col 비교
			{
				if (ft_col_check(col, puzzle, question) == 0)
				{
					puzzle[row][col] = 0 + '0';
					i++;
					continue ;
				}
			}
			if (col == size - 1) // col 사이즈가 full! Low비교
			{
				if (ft_row_check(row, puzzle, question) == 0)
				{
					puzzle[row][col] = 0 + '0';
					i++;
					continue ;
				}
			}
			puzzle_bt(row, col + 1, puzzle, question);
			puzzle[row][col] = 0 + '0';
		}
		i++;
	}
}
