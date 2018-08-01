/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 15:40:03 by cletinic          #+#    #+#             */
/*   Updated: 2018/07/23 15:40:08 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		check_int(t_fdf *fdf, int i)
{
	if ((i == (-2147483647)) || (i == (2147483646)))
	{
		return_error(fdf, 5);
		return (0);
	}
	return (0);
}

void	return_error(t_fdf *fdf, int returnvalue)
{
	if (returnvalue == 6)
		ft_putendl("Error: Input Invalid");
	if (returnvalue == 1)
		ft_putendl("Error: File Failed");
	if (returnvalue == 2)
		ft_putendl("Error: Reading File Failed");
	if (returnvalue == 3)
		ft_putendl("Error: Map input is Invalid");
	if (returnvalue == 4)
		ft_putendl("Error: Failed to Allocate Memory");
	if (returnvalue == 5)
	{
		ft_putendl("Error: Limit Reached");
		mlx_destroy_window(fdf->mlx, fdf->win);
	}
	exit(0);
}
