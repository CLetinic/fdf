/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 13:13:04 by cletinic          #+#    #+#             */
/*   Updated: 2018/05/24 10:16:21 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Converts an upper-case letter to the corresponding lower-case letter.
*/

#include "libft.h"

int		ft_tolower(int c)
{
	if (ft_isupper(c))
		c = (c - 'A') + ('a');
	return (c);
}
