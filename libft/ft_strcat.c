/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:26:04 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/04 07:07:43 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Append string pointed to by src to the end of string pointed to by dest.
*/

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*s1;
	char	*s2;
	size_t	index;
	size_t	destlength;

	index = 0;
	destlength = ft_strlen(dest);
	s1 = dest;
	s2 = (char *)src;
	while (s2[index])
	{
		s1[destlength + index] = s2[index];
		index++;
	}
	s1[destlength + index] = '\0';
	return (dest);
}
