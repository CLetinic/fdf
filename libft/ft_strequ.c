/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 07:32:12 by cletinic          #+#    #+#             */
/*   Updated: 2018/05/25 12:41:20 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Lexicographical comparison between s1 and s2.
*/

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if ((s1 != NULL) && (s2 != NULL))
	{
		if (ft_strcmp(s1, s2) == 0)
			return (1);
	}
	return ((int)NULL);
}
