/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delimcountwords.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 12:47:32 by cletinic          #+#    #+#             */
/*   Updated: 2018/05/31 15:42:19 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Counts the number of words in a string. A word is any set of
**	characters(/single character) seperated by the delimiter given as argument.
*/

#include "libft.h"

size_t		ft_delimcountwords(const char *s, char c)
{
	size_t	index;
	size_t	wordcount;

	index = 0;
	wordcount = 0;
	if (s != NULL)
	{
		while (s[index])
		{
			while ((s[index] == c) && (s[index] != '\0'))
				index++;
			if ((s[index] != c) && (s[index] != '\0'))
				wordcount++;
			while ((s[index] != c) && (s[index] != '\0'))
				index++;
		}
		return (wordcount);
	}
	return ((size_t)NULL);
}
