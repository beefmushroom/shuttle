/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:44:24 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/24 22:20:12 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	word_cnt(char *str, char *charset)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		if (!is_charset(*str, charset))
		{
			cnt++;
			while (*str && is_charset(*str, charset))
				str++;
		}
		str++;
	}
	return (cnt);
}

void	ft_strcpy(char *str, char *start, char *end)
{
	while (start < end)
		*str++ = *start++;
	*str = 0;
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	int		idx;
	char	**ans;
	char	*start;
	char	*end;

	words = word_cnt(str, charset);
	idx = 0;
	ans = (char **)malloc(sizeof(char *) * (words + 1));
	while (*str)
	{
		if (!is_charset(*str, charset))
		{
			start = str;
			while (*str && !is_charset(*str, charset))
				str++;
			end = str;
			ans[idx] = (char *)malloc(sizeof(char) * (end - start + 1));
			ft_strcpy(ans[idx++], start, end);
		}
		str++;
	}
	ans[idx] = 0;
	return (ans);
}
