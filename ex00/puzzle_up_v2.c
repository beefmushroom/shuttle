/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle_up_v2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 09:47:25 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/17 22:18:12 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

//우선 1~4로 쭉 뽑고, 그 다음에 처음 메인함수에서 인풋값 처리, 예외 처리. 
//숫자 4를 n으로 바꿔서 9x9로 확장시키기.

int	size;
int	ft_input_check(char *str);
char	**ft_input_convert(char *str);

void	puzzle_bt(int row, int col, char **puzzle, char **questions);

char	**ft_create_pz_box()
{
	char	**puzzle;
	int	i;
	int	j;

	puzzle = (char **)malloc(sizeof(char *) * size);
	i = 0;
	while (i < size)
	{
		puzzle[i] = (char *)malloc(sizeof(char) * size);
		i++;
	}


	return (puzzle);
}

void	puzzle_set(char *str)
{
	int	i;
	int	j;
	char	**question;
	char	**puzzle;

	//문자열 길이 구함ft (return int)
	size = ft_input_check(str);
	size = (size + 1) / 8;
	//test = size + '0';
	//write(1, &test, 1);
	
	// str을 2차원배열로 바꿈(동적으로 완성)
	question = ft_input_convert(str);
	

	puzzle = ft_create_pz_box();

	puzzle_bt(0, 0, puzzle, question);

}

void	ft_put_puzzle(char **puzzle)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			write(1, &puzzle[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

