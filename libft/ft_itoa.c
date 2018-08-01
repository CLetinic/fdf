/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 13:44:48 by cletinic          #+#    #+#             */
/*   Updated: 2018/05/31 15:44:27 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Converts the int data type in arguments  to string data type
*/

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;

	str = ft_strnew(1);
	if (str == NULL)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-n));
	}
	else if (n >= 10)
		str = ft_strjoin((ft_itoa(n / 10)), (ft_itoa(n % 10)));
	else
	{
		str[0] = (n + '0');
		str[1] = '\0';
	}
	return (str);
}
