/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:49:18 by cletinic          #+#    #+#             */
/*   Updated: 2018/05/24 07:29:20 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Converts a lower-case letter to the corresponding upper-case letter.
*/

#include "libft.h"

int		ft_toupper(int c)
{
	if (ft_islower(c))
		c = (c - 'a') + ('A');
	return (c);
}
