/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:57:34 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/18 14:00:17 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == '\t\n\v\f\r ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++
	}
	if (i < 2)
		return (0);
	return (i);
}

int str_len(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		idx++;
	}
	return (idx);
}

int	get_nb(char c, char *base)
{
	int	j;

	j = 0;
	while (base[j] && (base[j] != c))
	{
		j++;
	}
	return (j);
}

int	ft_atoi_base(char *str, char *base)
{
	int		len;
	char 	*base_str;
	int		str_len;
	int		i;
	int		sign;

	sign = 1;
	str_len = str_len(str);
	len = is_valid_base(base);
	if (!len)
		return (0);	
	while ((str[i] >= 9 && str[i] <= 13)|| str[i] == ' ')
			i++;
	while (str[i] == '+' || str[i] == '-')
		{	if (str[i] == '-')
				sign *= -1;
			i++;
		}
	while (
}
