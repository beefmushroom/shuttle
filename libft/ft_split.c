/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:40:57 by sungjuki          #+#    #+#             */
/*   Updated: 2021/12/11 15:31:59 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_char(char s_char, char c)
{
	if (s_char	== c)
		return (1);
	else
		return (0);
}

int	word_cnt(char const *s, char c)
{
	int	cnt;

	cnt = 0;
	while (*s)
	{
		if (!is_char(*s, c))
		{
			cnt++;
			while (*s && !is_char(*s, c))
				s++;
		}
		if (!*s)
			return (cnt);
		else
			s++;
	}
	return (cnt);
}

void	ft_strcpy(char *s, char *start, char *end)
{
	while (start < end)
		*s++ = *start++;
	*s = 0;
}

char	**make_split_str(char **ans, char *s, char c)
{
	int		idx;
	char	*start;
	char	*end;

	idx = 0;
	while (*s)
	{
		if (!is_char(*s, c))
		{
			start = s;
			while (*s && !is_char(*s, c))
				s++;
			end = s;
			ans[idx] = (char *)malloc(sizeof(char) * (end - start + 1));
			ft_strcpy(ans[idx++], start, end);
		}
		if (!*s)
			break;
		else
			s++;
	}
	ans[idx] = 0;
	return (ans);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	int		idx;
	char	**ans;
	char	*start;
	char	*end;

	idx = 0;
	start = 0;
	end = 0;
	words = word_cnt(s, c);
	ans = (char **)malloc(sizeof(char *) * (words + 1));
	ans = make_split_str(ans, (char *)s, c);
	return (ans);
}
