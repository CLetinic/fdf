/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 07:32:29 by cletinic          #+#    #+#             */
/*   Updated: 2018/05/25 12:52:08 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Lexicographical comparison between s1 and s2 up to n characters or
**	until a ’\0’ is reached.
*/

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if ((s1 != NULL) && (s2 != NULL))
	{
		if (ft_strncmp(s1, s2, n) == 0)
			return (1);
	}
	return ((int)NULL);
}
