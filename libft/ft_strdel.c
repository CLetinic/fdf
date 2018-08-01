/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 07:30:31 by cletinic          #+#    #+#             */
/*   Updated: 2018/05/28 11:24:59 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Takes the address of a string that need to be freed/
**	This is done with free(3), and then sets its pointer to NULL.
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as != NULL)
	{
		free(*as);
		*as = NULL;
	}
}
