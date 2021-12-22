/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:46:09 by sungjuki          #+#    #+#             */
/*   Updated: 2021/12/22 13:51:34 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_lst)
{
	if (!lst || !new_lst)
		return ;
	if (*lst)
	{
		ft_lstlast(*lst)->next = new_lst;
		new_lst->next = 0;
	}
	else
	{
		*lst = new_lst;
		new_lst->next = 0;
	}
}
