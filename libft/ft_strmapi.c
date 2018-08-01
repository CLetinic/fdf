/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 07:31:51 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/04 16:35:20 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Applies function f to each character of string passed as argument,
**	by giving its index as first argument to create a “fresh” new string
**	(with malloc()) resulting from the successive applications of f.
*/

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fstr;
	size_t			slength;
	size_t			index;

	if (s == NULL)
		return (NULL);
	slength = ft_strlen(s);
	fstr = ft_strnew(slength);
	index = 0;
	if (fstr == NULL)
		return (NULL);
	while (s[index])
	{
		fstr[index] = f(index, s[index]);
		index++;
	}
	fstr[slength] = '\0';
	return (fstr);
}
