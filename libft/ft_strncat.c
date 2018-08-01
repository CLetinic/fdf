/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:37:44 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/04 07:09:38 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Appends string pointed to by src to end of string pointed to by dest up to n
*/

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	index;
	size_t	destlength;

	index = 0;
	destlength = ft_strlen(dest);
	s1 = dest;
	s2 = (char *)src;
	while ((s2[index]) && (n))
	{
		s1[destlength + index] = s2[index];
		index++;
		n--;
	}
	s1[destlength + index] = '\0';
	return (dest);
}
