/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 15:02:34 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/01 07:25:32 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Reverses the argument string in place. - i.e it swaps the ith character
**	from the beginning with the ith character from the end.
*/

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	*start;
	char	*end;
	char	temp;

	end = str + ft_strlen(str) - 1;
	start = str;
	if (str != NULL)
	{
		while (start < end)
		{
			temp = *end;
			*end = *start;
			*start = temp;
			end--;
			start++;
		}
		return (str);
	}
	return (NULL);
}
