/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssulkuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:14:31 by ssulkuma          #+#    #+#             */
/*   Updated: 2021/12/07 12:44:57 by saritasul        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*temp;
	t_list	*head;

	temp = NULL;
	head = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		new = f(lst);
		if (temp == NULL)
			head = new;
		else
			temp->next = new;
		temp = new;
		lst = lst->next;
	}
	return (head);
}
