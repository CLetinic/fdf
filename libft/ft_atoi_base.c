/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 10:00:30 by cletinic          #+#    #+#             */
/*   Updated: 2018/07/23 10:05:35 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Converts the string argument s (base N <= 16)
**	to an integer (base 10) and returns it.
*/

#include "libft.h"

static int	ft_basevalue(char c, int base)
{
	int		index;
	char	s1[17];
	char	s2[17];

	index = 0;
	ft_strcpy(s1, "0123456789abcdef");
	ft_strcpy(s2, "0123456789ABCDEF");
	while (index < base)
	{
		if (c == s1[index] || c == s2[index])
			return (index);
		index++;
	}
	return (-1);
}

int			ft_atoi_base(const char *s, int base)
{
	int result;
	int sign;
	int index;

	index = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(s[index]))
		index++;
	if (s[index] == '+' || s[index] == '-')
	{
		if (s[index] == '-')
			sign = -1;
		index++;
	}
	while ((ft_basevalue(s[index], base)) != -1)
	{
		result = result * base;
		result = result + ft_basevalue(s[index], base);
		index++;
	}
	return (sign * result);
}
