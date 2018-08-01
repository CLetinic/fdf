/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:17:38 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/04 07:07:25 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Copies up to n characters from the string pointed to, by src to dest.
*/

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	index;

	index = 0;
	while ((n) && (src[index]))
	{
		dest[index] = src[index];
		n--;
		index++;
	}
	while (n)
	{
		dest[index] = '\0';
		n--;
		index++;
	}
	return (dest);
}
