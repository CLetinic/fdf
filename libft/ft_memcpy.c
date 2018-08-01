/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 09:55:56 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/04 07:04:00 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Copies n bytes from memory area s1 to memory area s2.
**  Overlapping causes undefined behaviour.
*/

#include "libft.h"

void	*ft_memcpy(void *s1, void const *s2, size_t n)
{
	size_t					index;
	unsigned char			*dest;
	unsigned const char		*src;

	index = 0;
	dest = (unsigned char *)s1;
	src = (unsigned const char *)s2;
	while (n)
	{
		dest[index] = src[index];
		index++;
		n--;
	}
	return (s1);
}
