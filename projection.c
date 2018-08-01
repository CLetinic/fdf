/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   projection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 07:35:20 by cletinic          #+#    #+#             */
/*   Updated: 2018/07/26 07:35:25 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/*
**	Projection Reference: https://bit.ly/2LmpurT
*/

void		projection_scale(t_fdf *fdf, int scale_fact)
{
	fdf->scale_x += scale_fact;
	fdf->scale_y += scale_fact;
}

void		isometric_projection(t_fdf *fdf, t_projection *p)
{
	float	rad;

	rad = M_PI / 180;
	p->proj_x = (p->x * (cos((rad) * fdf->angle))) +
				(p->y * (cos(((rad) * fdf->angle) + ((rad) * 120)))) +
				(p->z * (cos(((rad) * fdf->angle) - ((rad) * 120))));
	p->proj_y = (p->x * (sin((rad) * fdf->angle))) +
				(p->y * (sin(((rad) * fdf->angle) + ((rad) * 120)))) +
				(p->z * (sin(((rad) * fdf->angle) - ((rad) * 120))));
	if ((!(check_int(fdf, p->proj_x))) && (!(check_int(fdf, p->proj_y))) &&
		(!(check_int(fdf, fdf->position_x))) &&
		(!(check_int(fdf, fdf->position_y))) &&
		(!(check_int(fdf, (p->proj_x + fdf->position_x)))) &&
		(!(check_int(fdf, (p->proj_y + fdf->position_y)))))
	{
		fdf->map[p->i].pixel_x = p->proj_x + fdf->position_x;
		fdf->map[p->i].pixel_y = p->proj_y + fdf->position_y;
	}
}

void		project_points(t_fdf *fdf, t_projection *p)
{
	p->i = 0;
	while (p->i < fdf->index)
	{
		if ((!(check_int(fdf, fdf->scale_x))) &&
			(!(check_int(fdf, fdf->scale_y))) &&
			(!(check_int(fdf, fdf->scale_z))) &&
			(!(check_int(fdf, (fdf->map[p->i].x * fdf->scale_x)))) &&
			(!(check_int(fdf, (fdf->map[p->i].y * fdf->scale_y)))) &&
			(!(check_int(fdf, (fdf->map[p->i].z * fdf->scale_z)))))
		{
			p->x = fdf->map[p->i].x * fdf->scale_x;
			p->y = fdf->map[p->i].y * fdf->scale_y;
			p->z = fdf->map[p->i].z * fdf->scale_z;
		}
		isometric_projection(fdf, p);
		p->i++;
	}
}
