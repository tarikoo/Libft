/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:19:58 by taysoy            #+#    #+#             */
/*   Updated: 2022/02/16 13:50:30 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	tmp = lst;
	if (lst)
	{	
		while (tmp)
		{
			(*f)(tmp->content);
			tmp = tmp->next;
		}
	}
	else
		return ;
}

/*
void ft_del(void *content)
{
	//bzero(content, sizeof(content));
	memset(content, 'R', strlen(content));
}
//not: ft_lstitter(burada * kullanmadik)
int	main()
{
	char l[] = "start";
	char s0[] = "student0";
	char s1[] = "student1";
	char s2[] = "student2";
	t_list *lst = ft_lstnew(l);
	t_list *student0 = ft_lstnew(s0);
	t_list *student1 = ft_lstnew(s1);
	t_list *student2 = ft_lstnew(s2);

	ft_lstadd_back(&lst, student0);
	ft_lstadd_back(&lst, student1);
	ft_lstadd_back(&lst, student2);
	ft_lstiter(lst, ft_del);
	while(lst)
	{
		puts((char *)lst->content);
		lst = lst->next;
	}
}
*/
