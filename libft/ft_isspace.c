/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 08:36:56 by cletinic          #+#    #+#             */
/*   Updated: 2018/05/25 10:09:40 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Checks whether the passed character is white-space.
*/

#include "libft.h"

int		ft_isspace(int c)
{
	if ((c == ' ') || (c >= '\t' && c <= '\r'))
		return (1);
	return (0);
}
