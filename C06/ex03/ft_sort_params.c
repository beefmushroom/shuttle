/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:14:31 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/19 17:56:45 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	strcmp(char *str1, char *str2)
{
	int	idx;

	idx = 0;
	while (str1[idx] && (str1[idx] == str2[idx]))
	{
		idx++;
	}
	return (str1[idx] - str2[idx]);
}
