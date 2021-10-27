/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 11:06:27 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/27 11:23:42 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	words_cnt(char *str, char *charset)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		if (!is_charset(*str, charset))
		{
			cnt++;
			while (*str && !is_charset(*str, charset))
				str++;
		}
		str++;
	}
	return (cnt);
}

void	ft_strcpy(char *str, char *start, char *end)
{
	while (start < end)
	{
		*str++ = *start++;
	}
	*str = 0;
}	

char	**ft_split(char *str, char *charset)
{
	int		words;
	int		i;
	char	**ans;
	char	*start;
	char	*end;

	i = 0;
	words = words_cnt(str, charset);
	ans = malloc(sizeof(char *) * (words + 1));
	whlie (*str)
	{
		if(!is_charset(*str, charset))
		{
			start = str;
			while (*str && !is_charset(*str, charset))
				str++;
			end = str;
		}
		ans[i] = malloc(sizeof(char) * (end - start + 1));
		ft_strcpy(ans[a++], start, end);
		str++;
	}
	ans[i] = 0;
	return (ans);
}
