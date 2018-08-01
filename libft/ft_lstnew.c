/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 10:27:47 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/04 16:13:37 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates, with malloc(), and returns a fresh link.
**	The variables content and content_size of the new link are initialised by
**	copy of the parameters of the function.
**	If parameter content is nul, the variable content is initialised to NULL
**	and the variable content_size is initialised to 0 (even if the parameter
**	content_size is not). The variable next is initialised to NULL.
*/

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*link;

	link = (t_list *)malloc(sizeof(t_list));
	if (link == NULL)
		return (NULL);
	if (content == NULL)
	{
		link->content = NULL;
		link->content_size = 0;
	}
	else
	{
		link->content = malloc(sizeof(content_size));
		if (link->content == NULL)
			return (NULL);
		ft_memcpy(link->content, content, content_size);
		link->content_size = content_size;
	}
	link->next = NULL;
	return (link);
}
