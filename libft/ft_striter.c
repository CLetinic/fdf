/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 14:26:05 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/04 16:34:40 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Applies function f to each character of the string passed as argument.
**  Each character is passed by address to f to be  modified if necessary.
*/

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t	index;

	index = 0;
	if (s != NULL && f != NULL)
	{
		while (s[index])
			f(&s[index++]);
	}
}
