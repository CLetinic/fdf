/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 10:56:00 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/04 07:49:17 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Duplicates (saves a copy of) the string given as argument
**	to a null-terminated string up to n characters.
*/

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*duplicate;

	duplicate = ft_strnew(n);
	if (duplicate == NULL)
		return (NULL);
	ft_strncpy(duplicate, s, n);
	duplicate[n] = '\0';
	return (duplicate);
}
