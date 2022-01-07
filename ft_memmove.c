/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:10:41 by sungjuki          #+#    #+#             */
/*   Updated: 2022/01/07 11:51:23 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	size_t			j;
	unsigned char	*dest_pt;
	unsigned char	*src_pt;

	if (dest == 0 && src == 0)
		return (0);
	dest_pt = (unsigned char *)dest;
	src_pt = (unsigned char *)src;
	i = 0;
	j = 0;
	if (len == 0)
		return (dest);
	if (dest > src)
	{
		while (i < len)
			dest_pt[len - 1 - i++] = src_pt[len - 1 - j++];
	}
	else if (dest < src)
	{
		while (i < len)
			dest_pt[i++] = src_pt[j++];
	}
	return (dest);
}
