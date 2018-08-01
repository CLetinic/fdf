/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delimcountwordschars.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 12:47:54 by cletinic          #+#    #+#             */
/*   Updated: 2018/05/31 15:53:32 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Counts the number of characters of words in a string. A word is any set of
**	characters(/single character) seperated by the delimiter given as argument.
*/

#include "libft.h"

size_t	ft_delimcountwordschars(const char *s, char c)
{
	size_t	index;
	size_t	charcount;

	index = 0;
	charcount = 0;
	if (s != NULL)
	{
		while (s[index])
		{
			while ((s[index] == c) && (s[index] != '\0'))
				index++;
			while ((s[index] != c) && (s[index] != '\0'))
			{
				charcount++;
				index++;
			}
		}
		return (charcount);
	}
	return ((size_t)NULL);
}
