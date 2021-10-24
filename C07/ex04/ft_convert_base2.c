/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 11:56:40 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/24 10:28:45 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	base_valid_check(char *base);

char	*putnb_base(long long nb, int nb_len, char *ans, char *base)
{
	int	i;
	int	base_len;

	base_len = base_valid_check(base);
	if (nb == 0 || (nb_len == 1 && ans[0] == '-'))
	{
		ans[0] = base[0];
		ans[1] = 0;
		return (ans);
	}
	i = 1;
	while (nb > 0)
	{
		ans[nb_len - i] = base[nb % base_len];
		nb = nb / base_len;
		i++;
	}
	return (ans);
}

char	*convert_base_to(long long nb, char *base, int *sign)
{
	int			nb_len;
	char		*ans;
	long long	tmp;

	tmp = nb;
	nb_len = 0;
	while (tmp != 0)
	{
		tmp = tmp / base_valid_check(base);
		nb_len++;
	}
	if (*sign == -1)
		nb_len++;
	ans = (char *)malloc(sizeof(char) * (nb_len + 1));
	if (ans == NULL)
		return (NULL);
	if (*sign == -1)
		ans[0] = '-';
	ans[nb_len] = 0;
	return (putnb_base(nb, nb_len, ans, base));
}
