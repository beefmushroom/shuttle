/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 01:38:02 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/26 13:21:16 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	find_sep(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	if ('\0' == c)
		return (1);
	return (0);
}

int	cnt_str(char *charset, char *str)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		if (find_sep(charset, str[i]) == 0
			&& find_sep(charset, str[i + 1]) == 1)
			cnt++;
		i++;
	}
	return (cnt);
}

void	cpy_str(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (find_sep(charset, src[i]) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	put_in_split(char **split, char *str, char *charset)
{
	int	i;
	int	j;
	int	string;

	i = 0;
	string = 0;
	while (str[i] != '\0')
	{
		if (find_sep(charset, str[i]) == 1)
			i++;
		else
		{
			j = 0;
			while (find_sep(charset, str[i + j]) == 0)
				j++;
			split[string] = (char *)malloc((j + 1) * sizeof(char));
			cpy_str(split[string], str + i, charset);
			i += j;
			string++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	int		str_len;
	char	**split;

	str_len = cnt_str(charset, str);
	split = (char **)malloc((str_len + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	put_in_split(split, str, charset);
	split[str_len] = NULL;
	return (split);
}
