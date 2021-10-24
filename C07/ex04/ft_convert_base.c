/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 09:22:01 by sungjuki          #+#    #+#             */
/*   Updated: 2021/10/24 09:16:16 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*convert_base_to(long int nb, char *base_to, int *sign);

int	base_valid_check(char *base)
{
	int	len;
	int	j;

	len = 0;
	while (base[len])
	{
		if (base[len] == '+' || base[len] == '-')
			return (0);
		if ((base[len] >= 9 && base[len] <= 13) || base[len] == ' ')
			return (0);
		j = len + 1;
		while (base[j])
		{
			if (base[j] == base[len])
				return (0);
			j++;
		}
		len++;
	}
	if (len < 2)
		return (0);
	return (len);
}

int	get_nb(char n, char *base)
{
	int	idx;

	idx = 0;
	while (base[idx])
	{
		if (base[idx] == n)
			return (idx);
		idx++;
	}
	return (-1);
}

long long	ft_atoi_base(char *nbr, char *base, int *sign)
{
	int			len;
	int			i;
	long long	res;

	*sign = 1;
	res = 0;
	len = base_valid_check(base);
	i = 0;
	while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == ' ')
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			*sign *= -1;
		i++;
	}
	while (get_nb(nbr[i], base) != -1)
	{
		res = res * len + get_nb(nbr[i], base);
		i++;
	}
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long		nb;
	char			*ans;
	int				sign;

	if (!base_valid_check(base_from) || !base_valid_check(base_to))
		return (0);
	nb = ft_atoi_base(nbr, base_from, &sign);
	ans = convert_base_to(nb, base_to, &sign);
	return (ans);
}
