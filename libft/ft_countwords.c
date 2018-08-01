/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 08:25:12 by cletinic          #+#    #+#             */
/*   Updated: 2018/05/31 15:55:21 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Counts the number of words in a string.
**	A word is any set of characters(/single character) seperated by whitespace.
*/

#include "libft.h"

size_t		ft_countwords(const char *s)
{
	size_t	index;
	size_t	wordcount;

	index = 0;
	wordcount = 0;
	if (s != NULL)
	{
		while (s[index])
		{
			while ((ft_isspace(s[index])) && (s[index] != '\0'))
				index++;
			if ((!(ft_isspace(s[index]))) && (s[index] != '\0'))
				wordcount++;
			while ((!(ft_isspace(s[index]))) && (s[index] != '\0'))
				index++;
		}
		return (wordcount);
	}
	return ((size_t)NULL);
}
