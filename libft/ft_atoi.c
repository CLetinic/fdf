/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 07:31:47 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/07 12:19:08 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Converts the string argument str to an integer (type int).
*/

#include "libft.h"

int		ft_atoi(const char *s)
{
	size_t	index;
	int		sign;
	int		result;

	index = 0;
	result = 0;
	sign = 1;
	while (ft_isspace(s[index]))
		index++;
	if (s[index] == '-' || s[index] == '+')
	{
		if (s[index] == '-')
			sign = -1;
		index++;
	}
	while ((s) && (ft_isdigit(s[index])))
		result = s[index++] - '0' + (result * 10);
	if (index >= 20)
	{
		if (sign == -1)
			return (0);
		else if (sign == 1)
			return (-1);
	}
	return (sign * result);
}
