/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 06:46:49 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/04 07:32:45 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Compares at most the first n bytes of str1 and str2
*/

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t					index;
	unsigned char			*str1;
	unsigned const char		*str2;

	index = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned const char *)s2;
	while ((n) && (s1[index]) && (s2[index]) && (str1[index] == str2[index]))
	{
		index++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((str1[index]) - (str2[index]));
}
