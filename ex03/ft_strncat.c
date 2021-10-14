/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:56:11 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/14 15:56:37 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*cat;
	unsigned int	cnt;

	cat = dest;
	cnt = 0;
	while (*cat)
	{
		cat++;
	}
	while (cnt < nb)
	{
		if (*src == 0)
		{
			*cat = 0;
			return (dest);
		}
		*cat++ = *src++;
		cnt++;
	}
	*cat = 0;
	return (dest);
}
