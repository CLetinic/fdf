/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwordschars.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 12:23:13 by cletinic          #+#    #+#             */
/*   Updated: 2018/05/31 15:40:28 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Counts the number of characters of  words in a string.
**	A word is any set of characters(/single character) seperated by whitespace.
*/

#include "libft.h"

size_t		ft_countwordschars(const char *s)
{
	size_t	index;
	size_t	charcount;

	index = 0;
	charcount = 0;
	if (s != NULL)
	{
		while (s[index])
		{
			while (ft_isspace(s[index]))
				index++;
			while ((!(ft_isspace(s[index]))) && (s[index] != '\0'))
			{
				charcount++;
				index++;
			}
		}
		return (charcount);
	}
	return ((size_t)NULL);
}
