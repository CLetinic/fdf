/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 13:58:42 by cletinic          #+#    #+#             */
/*   Updated: 2018/07/13 13:58:48 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/*
**	DDA Function for line generation
**	https://bit.ly/2zzaSzY
*/

void				draw_line(t_fdf *fdf)
{
	int				steps;
	float			x_increment;
	float			y_increment;

	fdf->delta_x = fdf->pointx1 - fdf->pointx0;
	fdf->delta_y = fdf->pointy1 - fdf->pointy0;
	fdf->x = fdf->pointx0;
	fdf->y = fdf->pointy0;
	if (ft_abs(fdf->delta_x) > ft_abs(fdf->delta_y))
		steps = ft_abs(fdf->delta_x);
	else
		steps = ft_abs(fdf->delta_y);
	x_increment = fdf->delta_x / (float)steps;
	y_increment = fdf->delta_y / (float)steps;
	while (steps)
	{
		mlx_pixel_put(fdf->mlx, fdf->win, fdf->x, fdf->y, fdf->colour);
		fdf->x += x_increment;
		fdf->y += y_increment;
		steps--;
	}
}

void				vertical_line(t_fdf *fdf, t_wireframe *wf)
{
	int				rowbelow;
	int				p0index;
	int				p1index;

	rowbelow = wf->rowi + 1;
	p0index = (wf->rowi * fdf->columns) + (wf->i * 1);
	p1index = ((rowbelow) * fdf->columns) + (wf->i * 1);
	fdf->pointx0 = fdf->map[p0index].pixel_x;
	fdf->pointy0 = fdf->map[p0index].pixel_y;
	fdf->pointx1 = fdf->map[p1index].pixel_x;
	fdf->pointy1 = fdf->map[p1index].pixel_y;
	if ((((fdf->map[p0index].z) * fdf->scale_z) +
		((fdf->map[p1index].z) * fdf->scale_z)) > 0)
		fdf->colour = 9040962;
	if ((((fdf->map[p0index].z) * fdf->scale_z) +
		((fdf->map[p1index].z) * fdf->scale_z)) < 0)
		fdf->colour = 4380660;
	if ((((fdf->map[p0index].z) * fdf->scale_z) +
		((fdf->map[p1index].z) * fdf->scale_z)) == 0)
		fdf->colour = 10174964;
	draw_line(fdf);
}

void				horizontal_line(t_fdf *fdf, t_wireframe *wf, int shift)
{
	int				rowshift;
	int				colshift;
	int				p0index;
	int				p1index;

	rowshift = wf->rowi + shift;
	colshift = (wf->i * 1) - 1;
	p0index = ((rowshift) * fdf->columns) + (wf->i * 1);
	p1index = ((rowshift) * fdf->columns) + (colshift);
	fdf->pointx0 = fdf->map[p0index].pixel_x;
	fdf->pointy0 = fdf->map[p0index].pixel_y;
	fdf->pointx1 = fdf->map[p1index].pixel_x;
	fdf->pointy1 = fdf->map[p1index].pixel_y;
	if ((((fdf->map[p0index].z) * fdf->scale_z) +
		((fdf->map[p1index].z) * fdf->scale_z)) > 0)
		fdf->colour = 9040962;
	if ((((fdf->map[p0index].z) * fdf->scale_z) +
		((fdf->map[p1index].z) * fdf->scale_z)) < 0)
		fdf->colour = 4380660;
	if ((((fdf->map[p0index].z) * fdf->scale_z) +
		((fdf->map[p1index].z) * fdf->scale_z)) == 0)
		fdf->colour = 10174964;
	draw_line(fdf);
}

void				draw_wireframe(t_fdf *fdf, t_wireframe *wf)
{
	wf->rowi = 0;
	while ((wf->rowi < fdf->rows) && ((wf->rowi + 1) < fdf->rows))
	{
		wf->i = 0;
		while ((wf->i < fdf->columns))
		{
			if (wf->i == 0)
			{
				vertical_line(fdf, wf);
				wf->i++;
			}
			horizontal_line(fdf, wf, 0);
			vertical_line(fdf, wf);
			if ((wf->rowi + 1) == fdf->rows - 1)
				horizontal_line(fdf, wf, 1);
			wf->i++;
		}
		wf->rowi++;
	}
}

void				draw_initialise(t_fdf *fdf)
{
	t_wireframe		wf;
	t_projection	p;

	project_points(fdf, &p);
	draw_wireframe(fdf, &wf);
}
