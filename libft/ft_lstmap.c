/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjuki <sungjuki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:21:44 by sungjuki          #+#    #+#             */
/*   Updated: 2021/12/22 13:51:01 by sungjuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	**make_head_nod(void)
{
	t_list	**ans;

	ans = (t_list **)malloc(sizeof(t_list *));
	if (!ans)
		return (0);
	*ans = 0;
	return (ans);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**ans;
	t_list	*tmp;

	if (!lst || !f)
		return (0);
	ans = make_head_nod();
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(ans, del);
			free(ans);
			ans = 0;
			return (0);
		}
		ft_lstadd_back(ans, tmp);
		lst = lst->next;
	}
	return (*ans);
}
