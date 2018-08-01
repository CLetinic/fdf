/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:55:56 by cletinic          #+#    #+#             */
/*   Updated: 2018/05/31 16:08:17 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Outputs the string s to the standard output.
*/

#include "libft.h"

void	ft_putstr(char const *s)
{
	size_t	index;

	index = 0;
	if (s != NULL)
	{
		while (s[index])
			ft_putchar(s[index++]);
	}
}
