/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 10:02:28 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/04 07:05:10 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Locates first occurrence of c (converted to an unsigned char) in string s.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					index;
	unsigned const char		*str;

	index = 0;
	str = (unsigned const char *)s;
	while (n)
	{
		if (str[index] == (unsigned char)c)
			return ((char *)&str[index]);
		index++;
		n--;
	}
	return (NULL);
}
