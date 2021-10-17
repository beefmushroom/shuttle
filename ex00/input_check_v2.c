/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check_v2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:27:19 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/17 22:17:37 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

//주소값 전달 받고 공백 제거
extern	int	size;

char	**ft_input_convert(char *str)
{
	char	*input;
	char	*tmp;
	int	i;
	int	j;
	char	**question;

	// 문제 str 2차원 배열로 생성
	question = (char **)malloc(sizeof(char *) * 4);
	i = 0;
	while (i < 4)
	{
		question[i] = (char *)malloc(sizeof(char) * size);
		i++;
	}


	// 공백 건너뛰고 할당.  
	i = 0;
	j = 0;
	while (*str)
	{
		if (*str != ' ')
		{
			question[i][j] = *str;
			j++;
			if(j == size)
			{
				i++;
				j = 0;
			}
		}
		str++;
	}
	return (question);
}

int	ft_input_check(char *str)
{
	char	*temp;
	int	len;

	temp = str;
	len = 0;
	while (*temp)
	{
		len++;
		temp++;
	}
	return (len);
}
