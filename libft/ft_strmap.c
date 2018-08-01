/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 07:31:43 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/04 16:38:50 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Applies function f to each character of string given as argument,
**	to create a “fresh” new string (with malloc())
**  resulting from the successive applications of f.
*/

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t			slength;
	char			*fstr;
	unsigned int	index;

	if (s == NULL)
		return (NULL);
	index = 0;
	slength = ft_strlen(s);
	fstr = ft_strnew(slength);
	if (fstr == NULL)
		return (NULL);
	while (s[index])
	{
		fstr[index] = f(s[index]);
		index++;
	}
	fstr[slength] = '\0';
	return (fstr);
}
