/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:19:26 by taysoy            #+#    #+#             */
/*   Updated: 2022/02/15 15:14:17 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nnode;

	nnode = (t_list *)malloc(sizeof(t_list));
	if (!nnode)
		return (NULL);
	nnode -> content = content;
	nnode -> next = NULL;
	return (nnode);
}
