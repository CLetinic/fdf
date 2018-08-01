/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 14:50:33 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/04 07:18:17 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Locates the last occurrence of c in the string pointed to by str.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	slength;

	slength = ft_strlen(s);
	while (slength)
	{
		if ((s[slength]) == ((char)c))
			return ((char *)&s[slength]);
		slength--;
	}
	if (c == s[0])
		return ((char *)&s[slength]);
	return (NULL);
}
