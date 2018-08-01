/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 07:20:50 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/04 07:04:21 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Copy bytes from the memory area src into dest.
**	Stopping after the first occurrence of byte c, or after n bytes are copied
**  whichever comes first. Here character c is also copied.
*/

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char			*dest;
	unsigned const char		*src;
	size_t					index;

	dest = (unsigned char *)s1;
	src = (unsigned const char *)s2;
	index = 0;
	while (n)
	{
		dest[index] = src[index];
		if (src[index] == (unsigned char)c)
			return (&dest[index + 1]);
		index++;
		n--;
	}
	return (NULL);
}
