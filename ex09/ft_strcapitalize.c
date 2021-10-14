/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:18:49 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/14 15:46:35 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	all_lowercase(char *str, int idx)
{
	while (str[idx])
	{
		if (str[idx] >= 'A' && str[idx] <= 'Z')
		{
			str[idx] = str[idx] + 32;
		}
		idx++;
	}
}

void	convert(char *str, int idx)
{
	if (str[idx] >= 'a' && str[idx] <= 'z')
	{
		if (str[idx - 1] < 48)
		{
			str[idx] -= 32;
		}
		else if (str[idx - 1] > 57 && str[idx - 1] < 65)
		{
			str[idx] -= 32;
		}
		else if (str[idx - 1] > 90 && str[idx - 1] < 97)
		{
			str[idx] -= 32;
		}
		else if (str[idx - 1] > 122)
		{
			str[idx] -= 32;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int	idx;

	idx = 0;
	all_lowercase(str, idx);
	idx = 0;
	while (str[idx])
	{
		convert(str, idx);
		idx++;
	}
	return (str);
}
