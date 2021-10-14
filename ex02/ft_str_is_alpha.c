/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:40:26 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/14 13:43:26 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (*str < 65 || *str > 122)
		{
			return (0);
		}
		else if (*str > 90 && *str < 97)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
