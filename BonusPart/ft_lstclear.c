/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:09:27 by taysoy            #+#    #+#             */
/*   Updated: 2022/02/16 13:39:21 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*b;

	tmp = *lst;
	while (tmp)
	{
		(*del)(tmp -> content);
		b = tmp -> next;
		free(tmp);
		tmp = b;
	}
	*lst = NULL;
}
