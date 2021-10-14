/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:53:13 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/14 15:53:40 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	if (n == 0)
	{
		return (0);
	}
	while (idx < n && (s1[idx] || s2[idx]))
	{
		if (s1[idx] == s2[idx])
		{
			idx++;
		}
		else if (s1[idx] > s2[idx])
		{
			return (s1[idx] - s2[idx]);
		}
		else if (s1[idx] < s2[idx])
		{
			return (s1[idx] - s2[idx]);
		}
	}
	return (0);
}
