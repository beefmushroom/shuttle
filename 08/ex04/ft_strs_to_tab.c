/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 09:49:49 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/25 15:28:06 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (str);
}

char	*strcpy(char *dst, char *src)
{
	char	*dst;

	dst = (char *)malloc(sizeof(char) * src + 1);
	if (dst == NULL)
		return (NULL);
	while (*src)
		*dst++ = *src++;
	*dst = 0;
	return (dst);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*str;

	i = 0;
	str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (str == NULL)
		return (NULL);
	while (i < ac)
	{
		str[i]->size = strlen(av[i]);
		str[i]->str = av[i];
		str[i]->copy = strcpy(str[i]->copy, av[i]);
		i++;
	}
	str[i] = {0, 0, 0};
	return (str);
}
