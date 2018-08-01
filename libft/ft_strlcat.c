/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 12:21:31 by cletinic          #+#    #+#             */
/*   Updated: 2018/06/05 07:34:34 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Appends string src to the end of dst.
**	It will append at most dstsize - strlen(dst) - 1 characters.
**	It will then NUL-terminate, unless dstsize is 0 or the original dst string
**	was longer than dstsize.
*/

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t destsize)
{
	int	destlength;
	int	srclength;
	int	index;
	int	max;

	index = 0;
	destlength = ft_strlen(dest);
	max = destlength;
	srclength = ft_strlen(src);
	if ((int)destsize < destlength)
		max = destsize;
	while ((((int)destsize - destlength - 1) > index) && (src[index]))
	{
		dest[destlength + index] = src[index];
		index++;
	}
	dest[destlength + index] = '\0';
	return ((size_t)max + (size_t)srclength);
}
