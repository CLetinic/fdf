/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 07:33:46 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/05 10:25:02 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates (with malloc()) and returns an array of “fresh” strings
**	(all ending with ’\0’, including the array itself) obtained by
**	spliting s using the character c as a delimiter.
*/

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	index;
	size_t	start;
	size_t	wordcount;

	index = 0;
	wordcount = 0;
	if (s == NULL)
		return (NULL);
	str = (char**)ft_memalloc(sizeof(char *) * (ft_delimcountwords(s, c)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[index])
	{
		while ((s[index] == c))
			index++;
		start = index;
		while ((s[index] != c) && (s[index]))
			index++;
		if (index > start)
			str[wordcount++] = ft_strsub(s, start, (index - start));
	}
	str[wordcount] = 0;
	return (str);
}
