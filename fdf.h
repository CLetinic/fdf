/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 10:45:26 by cletinic          #+#    #+#             */
/*   Updated: 2018/07/06 16:49:30 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "libft/libft.h"
# include <fcntl.h>
# include <math.h>
# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef	struct	s_vector
{
	int			x;
	int			y;
	int			z;
	int			colour;
	char		*color;

	int			pixel_x;
	int			pixel_y;

}				t_vector;

typedef	struct	s_projection
{
	int			i;
	int			x;
	int			y;
	int			z;
	int			proj_x;
	int			proj_y;
}				t_projection;

typedef	struct	s_wireframe
{
	int			i;
	int			rowi;
}				t_wireframe;

typedef	struct	s_fdf
{
	void		*mlx;
	void		*win;
	char		**fileinput;

	int			pointx0;
	int			pointy0;
	int			pointz0;
	int			pointx1;
	int			pointy1;
	int			pointz1;
	int			colour;
	int			delta_x;
	int			delta_y;
	float		x;
	float		y;

	int			angle;
	int			scale_x;
	int			scale_y;
	int			scale_z;
	int			position_x;
	int			position_y;

	int			fd;
	int			index;
	int			columns;
	int			columnsindex;
	int			rows;
	int			rowindex;
	int			retint;
	char		color[8];
	char		*line;
	char		*ret;
	char		*temp1;
	char		**temp;
	t_vector	*map;
}				t_fdf;

int				check_int(t_fdf *fdf, int i);
void			return_error(t_fdf *fdf, int returnvalue);

int				read_initialise(t_fdf *fdf);
int				read_rows(t_fdf *fdf);
int				fill_map_array(t_fdf *fdf);
void			read_columns(t_fdf *fdf);
void			split_into_array(t_fdf *fdf);

void			project_points(t_fdf *fdf, t_projection *p);
void			projection_scale(t_fdf *fdf, int scale_fact);
void			isometric_projection(t_fdf *fdf, t_projection *p);

void			draw_initialise(t_fdf *fdf);
void			draw_wireframe(t_fdf *fdf, t_wireframe *wf);
void			draw_line(t_fdf *fdf);
void			vertical_line(t_fdf *fdf, t_wireframe *wf);
void			horizontal_line(t_fdf *fdf, t_wireframe *wf, int shift);
#endif
