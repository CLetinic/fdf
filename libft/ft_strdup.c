/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 07:21:49 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/04 07:06:52 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Duplicates (saves a copy of) the string given as argument
**  to a null-terminated string.
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	slength;
	char	*duplicate;

	slength = ft_strlen(s);
	duplicate = ft_strnew(slength);
	if (duplicate == NULL)
		return (NULL);
	ft_strcpy(duplicate, s);
	duplicate[slength] = '\0';
	return (duplicate);
}
