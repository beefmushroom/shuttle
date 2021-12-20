/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:39:39 by sungjuki          #+#    #+#             */
/*   Updated: 2021/12/13 15:43:40 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
		return (0);
	while (1)
	{
		if (lst->next)
			break ;
		lst = lst->next;
	}
	return (lst);
}
