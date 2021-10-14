/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:16:24 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/14 14:18:07 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp)
	{
		if (*tmp >= 65 && *tmp <= 90)
		{
			*tmp = *tmp + 32;
		}
		tmp++;
	}
	return (str);
}
