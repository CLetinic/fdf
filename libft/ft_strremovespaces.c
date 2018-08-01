/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strremovespaces.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 14:50:59 by cletinic          #+#    #+#             */
/*   Updated: 2018/07/12 14:51:08 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates & returns “fresh” string without spaces from string argument
*/

#include "libft.h"

char		*ft_strremovespaces(char *s)
{
	char	*str;
	int		index;
	int		strlength;
	int		strindex;

	index = 0;
	strindex = 0;
	if (s == NULL)
		return (NULL);
	strlength = ft_countwordschars(s);
	str = ft_strnew(strlength);
	if (str == NULL)
		return (NULL);
	while (s[index] && (strindex < strlength))
	{
		while (ft_isspace(s[index]))
			index++;
		while ((!(ft_isspace(s[index]))) && (strindex < strlength))
		{
			str[strindex] = s[index];
			index++;
			strindex++;
		}
	}
	return (str);
}
