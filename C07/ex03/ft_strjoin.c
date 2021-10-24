/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:41:57 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/21 14:52:46 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	total_len(char **strs, char *sep, int size)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		count += str_len(strs[i]);
		if (i < size - 1)
			count += str_len(sep);
		i++;
	}
	return (count);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*make_str(char **strs, char *sep, int t_size, int size)
{
	char	*strj;
	char	*last;
	int		i;

	i = 0;
	strj = (char *)malloc((sizeof(char) * (t_size + 1)));
	if (strj == NULL)
		return (0);
	last = strj;
	while (i < size)
	{
		ft_strcpy(last, strs[i]);
		last += str_len(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(last, sep);
			last += str_len(sep);
		}
		i++;
	}
	*last = 0;
	return (strj);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		t_size;
	char	*result;

	if (size == 0)
	{
		result = (char *)malloc(sizeof(char));
		return (result);
	}
	t_size = total_len(strs, sep, size);
	result = make_str(strs, sep, t_size, size);
	return (result);
}
