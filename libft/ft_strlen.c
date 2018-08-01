/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 14:33:20 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/04 07:06:33 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Computes the length of the string given as argument.
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length])
		length++;
	return (length);
}
