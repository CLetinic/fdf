/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 13:32:30 by cletinic          #+#    #+#             */
/*   Updated: 2018/05/24 10:15:39 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Checks for an ASCII character,
**  which is any character between 0 and octal 0177 inclusive.
*/

#include "libft.h"

int		ft_isascii(int c)
{
	if ((c >= 0) && (c <= 0177))
		return (1);
	return (0);
}
