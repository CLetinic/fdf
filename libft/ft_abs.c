/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 14:08:36 by cletinic          #+#    #+#             */
/*   Updated: 2018/07/12 14:14:39 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Returns the absolute value of an integer (i.e a number absent of a sign).
*/

#include "libft.h"

int		ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
