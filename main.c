/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 13:57:30 by cletinic          #+#    #+#             */
/*   Updated: 2018/07/23 11:17:03 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>

int			keydown(int keycode, t_fdf *fdf)
{
	if (keycode == 53)
	{
		free(fdf->map);
		mlx_destroy_window(fdf->mlx, fdf->win);
		exit(0);
	}
	mlx_clear_window(fdf->mlx, fdf->win);
	if (keycode == 24)
		fdf->scale_z += 1;
	if (keycode == 27)
		fdf->scale_z -= 1;
	if (keycode == 69)
		projection_scale(fdf, 2);
	if (keycode == 78)
		projection_scale(fdf, -2);
	if (keycode == 126)
		fdf->position_y -= 10;
	if (keycode == 125)
		fdf->position_y += 10;
	if (keycode == 123)
		fdf->position_x -= 10;
	if (keycode == 124)
		fdf->position_x += 10;
	draw_initialise(fdf);
	return (0);
}

int			main(int argc, char **argv)
{
	t_fdf		fdf;

	if (argc == 2)
	{
		fdf.fileinput = &argv[1];
		fdf.colour = 0;
		fdf.rows = 0;
		fdf.columns = 0;
		fdf.rowindex = -1;
		read_initialise(&fdf);
		fdf.mlx = mlx_init();
		fdf.win = mlx_new_window(fdf.mlx, 1920, 1080, "Wireframe (FDF)");
		fdf.angle = 30;
		fdf.scale_x = 20;
		fdf.scale_y = 20;
		fdf.scale_z = 4;
		fdf.position_x = 500;
		fdf.position_y = 500;
		draw_initialise(&fdf);
		mlx_key_hook(fdf.win, keydown, &fdf);
		mlx_loop(fdf.mlx);
	}
	else
		return_error(&fdf, 6);
	return (0);
}
