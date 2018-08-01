/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 07:21:05 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/04 07:05:42 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Copies n characters from str2 to str1, but prevents overlapping
*/

#include "libft.h"

void		*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char			*dest;
	unsigned const char		*src;
	unsigned char			*temp;

	dest = (unsigned char *)s1;
	src = (unsigned const char *)s2;
	temp = (unsigned char *)malloc(sizeof(unsigned char) * n);
	if (temp == NULL)
		return (NULL);
	ft_memcpy(temp, src, n);
	ft_memcpy(dest, temp, n);
	free(temp);
	return (dest);
}
