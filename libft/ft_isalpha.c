/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 07:27:04 by cletinic          #+#    #+#             */
/*   Updated: 2018/05/24 10:08:07 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Checks for any character for which isupper() or islower() is true.
*/

#include "libft.h"

int		ft_isalpha(int c)
{
	if ((ft_islower(c)) || (ft_isupper(c)))
		return (1);
	return (0);
}
