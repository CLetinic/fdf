/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 07:33:33 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/01 07:42:30 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates (with malloc()) & returns a copy of string given as argument
**	without whitespaces at the start or at the end of the string.
*/

#include "libft.h"

static int	ft_iswhitespace(int c)
{
	if ((c == ' ') || (c == '\t') || (c == '\n'))
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	size_t	end;
	size_t	start;

	if (s == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (ft_iswhitespace(s[start]))
	{
		if (start == end)
			return (ft_strdup(""));
		start++;
	}
	while (ft_iswhitespace(s[end]))
		end--;
	return (ft_strsub(s, start, (end - start + 1)));
}
