/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 16:43:11 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/04 07:32:33 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Compares string pointed to by str1 to the string pointed to by str2.
*/

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t					index;
	unsigned char			*str1;
	unsigned const char		*str2;

	index = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned const char *)s2;
	while ((str1[index]) && (str2[index]) && (str1[index] == str2[index]))
		index++;
	return ((str1[index]) - (str2[index]));
}
