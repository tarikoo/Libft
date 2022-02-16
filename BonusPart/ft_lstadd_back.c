/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:59:41 by taysoy            #+#    #+#             */
/*   Updated: 2022/02/16 13:38:09 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	head = *lst;
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			head = head->next;
		}
		head->next = new;
	}
	else
		*lst = new;
}
