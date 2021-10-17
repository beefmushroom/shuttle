/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 09:36:33 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/17 10:36:41 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_build_puzzle(int row, int col, char **puzzle);

void	ft_put_puzzle(char **puzzle);

int	main(void)
{
	int		i;
	char	**puzzle;

	i = 0;
	puzzle = (char **)malloc(sizeof(char *) * 4);
	while (i < 4)
	{
		puzzle[i] = (char *)malloc(sizeof(char) * 4);
		i++;
	}
	ft_build_puzzle(0, 0, puzzle);
	ft_put_puzzle(puzzle); 
	i = 0;
	while (i < 4)
	{
		free(puzzle[i]);
		i++;
	}
	free(puzzle);
}
