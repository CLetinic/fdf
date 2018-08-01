/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 07:25:58 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/04 09:37:45 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Finds the first occurrence of the substring (needle)
**	in the string haystack (h).
**	Up to n characters are searched (excluding the terminating null character).
*/

#include "libft.h"

char	*ft_strnstr(const char *h, const char *needle, size_t n)
{
	size_t	index;
	size_t	needlelength;

	index = 0;
	needlelength = ft_strlen(needle);
	if (needlelength == 0)
		return ((char *)h);
	while ((h[index]) && (n >= needlelength))
	{
		if (ft_strncmp(&h[index], needle, needlelength) == 0)
			return ((char *)&h[index]);
		index++;
		n--;
	}
	return (NULL);
}
