/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 16:39:43 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/05 10:35:14 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Iterates a list lst and applies the function f to each link to create a
**	fresh list (using malloc()) resulting from successive application of f.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*link;
	t_list	*temp;

	if (lst == NULL)
		return (NULL);
	temp = f(lst);
	link = ft_lstnew(temp->content, temp->content_size);
	if (link == NULL)
		return (NULL);
	lst = lst->next;
	head = link;
	while (lst != NULL)
	{
		temp = f(lst);
		link->next = ft_lstnew(temp->content, temp->content_size);
		if (link == NULL)
			return (NULL);
		link = link->next;
		lst = lst->next;
	}
	return (head);
}
