/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 09:49:49 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/25 20:44:49 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*strdup(char *src)
{
	char	*dst;
	int		src_len;
	int		i;

	i = 0;
	src_len = ft_strlen(src);
	dst = (char *)malloc(sizeof(char) * (src_len + 1));
	if (dst == NULL)
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*str;

	i = 0;
	if (ac < 0)
	{
		ac = 0;
	}
	str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (str == NULL)
		return (NULL);
	while (i < ac)
	{
		str[i].size = ft_strlen(av[i]);
		str[i].str = av[i];
		str[i].copy = strdup(av[i]);
		i++;
	}
	str[i] = (t_stock_str){0, 0, 0};
	return (str);
}
