/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:54:40 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/14 15:54:59 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*cat;

	cat = dest;
	while (*cat)
	{
		cat++;
	}
	while (*src)
	{
		*cat++ = *src++;
	}
	*cat = 0;
	return (dest);
}
