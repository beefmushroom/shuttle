/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 09:47:25 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/17 11:05:03 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

//우선 1~4로 쭉 뽑고, 그 다음에 처음 메인함수에서 인풋값 처리, 예외 처리. 
//숫자 4를 n으로 바꿔서 9x9로 확장시키기.

void	ft_build_puzzle(int row, int col, char **puzzle);

void	ft_build_puzzle_recursive(int row, int col, char** puzzle);

//is_valid_value(row, col, puzzle);

void	ft_put_puzzle(char **puzzle);

void	ft_build_puzzle(int row, int col, char **puzzle)
{
	while (row <= 3)
	{
		//if (is_valid_value(row, col, num, puzzle))
		ft_build_puzzle_recursive (row, col, puzzle);
		row++;
		col = 0;
	}
}

void	ft_build_puzzle_recursive (int row, int col, char **puzzle)
{
//우선 오름차순으로 1234씩 뽑히게 만들기!
/*
	나중에 col, row 조건 보면서 숫자 뽑을 때는 재귀로 돌려야 함.
	if (col == 3)
	{
		return ;
	}
	puzzle[row][col] = col + '0';
	while (col <= 3)
	{
		ft_build_puzzle_recursive (row, col + 1, puzzle);
		col + 1;
	}
*/
	while (col < 4)
	{
		puzzle[row][col] = col + '0';
		col++;
	}
	return ;
}

//퍼즐 프린트 함수
void	ft_put_puzzle(char **puzzle)
{
	int	row_i;
	int	col_i;

	row_i = 0;
	while (row_i < 4)
	{
		col_i = 0;
		while (col_i < 4)
		{
			write (1, &puzzle[row_i][col_i], 1);
			if (col_i != 3)
				write (1, " ", 1);
			col_i++;
		}
		write (1, "\n", 1);
		row_i++;
	}
}
