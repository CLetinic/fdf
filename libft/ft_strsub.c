/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 07:32:56 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/04 07:56:12 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates (with malloc()) & returns “fresh” substring from string argument
**	The substring begins at indexstart and is of size len.
**	If start & len aren’t refering to a valid substring, behavior is undefined.
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	index;

	if (s == NULL)
		return (NULL);
	index = 0;
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	while (len-- && s[start])
		str[index++] = s[start++];
	return (str);
}
