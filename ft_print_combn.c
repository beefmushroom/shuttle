/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangkkim <sangkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:47:44 by sangkkim          #+#    #+#             */
/*   Updated: 2021/10/11 19:52:34 by sangkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);

void	ft_print_combn_recursive(int n, int depth, int arr[]);

void	ft_print_number(int arr[], int n);

void	ft_print_combn(int n)
{
	int	arr[10];

	arr[0] = 0;
	while (arr[0] < 10)
	{
		ft_print_combn_recursive(n, 1, arr);
		arr[0] += 1;
	}
}

void	ft_print_combn_recursive(int n, int depth, int arr[])
{
	if (n == depth)
		ft_print_number(arr, n);
	else
	{
		arr[depth] = arr[depth - 1] + 1;
		while (arr[depth] < 10)
		{
			ft_print_combn_recursive(n, depth + 1, arr);
			arr[depth] += 1;
		}
	}
}

void	ft_print_number(int arr[], int n)
{
	char	buffer[10];
	int		i;

	i = 0;
	while (i < n)
	{
		buffer[i] = arr[i] + '0';
		i += 1;
	}
	write(1, &buffer, n);
	if (arr[0] < 10 - n)
		write(1, ", ", 2);
}
