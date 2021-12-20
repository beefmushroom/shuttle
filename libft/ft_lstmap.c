/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:21:44 by sungjuki          #+#    #+#             */
/*   Updated: 2021/12/14 10:28:52 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**ans;
	t_list	*tmp;

	if (!lst)
		return (0);
	ans = (t_list **)malloc(sizeof(t_list *));
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(ans, del);
			return (0);
		}
		ft_lstadd_back(ans, tmp);
		lst = lst->next;
	}
	return (*ans);
}