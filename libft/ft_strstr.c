/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 07:25:39 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/04 07:26:36 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Finds the first occurrence of the substring (needle)
**	-excluding the terminating null character- in the string haystack.
*/

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	needlelength;
	size_t	index;

	index = 0;
	needlelength = ft_strlen(needle);
	if (needlelength == 0)
		return ((char *)haystack);
	while (haystack[index])
	{
		if (ft_memcmp(&haystack[index], needle, needlelength) == 0)
			return ((char *)&haystack[index]);
		index++;
	}
	return (NULL);
}
