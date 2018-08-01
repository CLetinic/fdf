/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 07:33:16 by cletinic          #+#    #+#             */
/*   Updated: 2018/05/31 16:27:18 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates (with malloc()) and returns a “fresh” string ending with ’\0’,
**	result of the concatenation of s1 and s2.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	fulllength;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	fulllength = ft_strlen(s1) + ft_strlen(s2);
	str = ft_strnew(fulllength);
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}
