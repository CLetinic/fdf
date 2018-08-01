/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 07:21:28 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/04 07:06:05 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Compares the first n bytes of memory area str1 and memory area str2.
*/

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					index;
	unsigned char			*str1;
	unsigned const char		*str2;

	index = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned const char *)s2;
	while (n)
	{
		if (str1[index] != str2[index])
			return ((str1[index]) - (str2[index]));
		index++;
		n--;
	}
	return ((int)NULL);
}
