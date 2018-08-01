/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 07:29:35 by cletinic          #+#    #+#             */
/*   Updated: 2018/05/28 09:52:31 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates (with malloc()) and returns a “fresh” memory.
**	i.e The memory allocated is initialized to 0.
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;

	str = (void *)malloc(sizeof(void) * size);
	if (str != NULL)
	{
		ft_bzero(str, size);
		return (str);
	}
	return (NULL);
}
