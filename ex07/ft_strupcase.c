/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:13:43 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/14 14:15:52 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp)
	{
		if (*tmp >= 97 && *tmp <= 122)
		{
			*tmp = *tmp - 32;
		}
		tmp++;
	}
	return (str);
}
