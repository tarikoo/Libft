/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:35:56 by taysoy            #+#    #+#             */
/*   Updated: 2022/02/16 13:36:34 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*decoy;

	if (!lst || !f)
		return (NULL);
	tmp = ft_lstnew(f(lst->content));
	if (!tmp)
		return (NULL);
	decoy = tmp;
	lst = lst->next;
	while (lst)
	{
		tmp->next = ft_lstnew(f(lst->content));
		if (!tmp ->next)
		{
			ft_lstclear(&decoy, del);
			return (0);
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	tmp->next = NULL;
	return (decoy);
}
