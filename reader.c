/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 13:57:49 by cletinic          #+#    #+#             */
/*   Updated: 2018/07/23 11:16:47 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <fcntl.h>
#include <stdio.h>

void		read_columns(t_fdf *fdf)
{
	fdf->ret = ft_strdup(fdf->line);
	ft_strdel(&(fdf->line));
	fdf->temp = ft_strsplit(fdf->ret, ' ');
	while (fdf->temp[fdf->columns])
	{
		if (!(check_int(fdf, fdf->columns)))
		{
			free(fdf->temp[fdf->columns]);
			fdf->columns++;
		}
	}
	free(fdf->temp);
}

int			read_rows(t_fdf *fdf)
{
	fdf->retint = 0;
	if (get_next_line(fdf->fd, &fdf->line) < 0 || ft_strlen(fdf->line) == 0)
		return (2);
	read_columns(fdf);
	fdf->rows++;
	while ((fdf->retint = get_next_line(fdf->fd, &(fdf->line))) == 1)
	{
		fdf->temp1 = ft_strjoin(fdf->ret, " ");
		ft_strdel(&(fdf->ret));
		fdf->ret = fdf->temp1;
		fdf->temp1 = ft_strjoin(fdf->ret, fdf->line);
		ft_strdel((&fdf->ret));
		ft_strdel(&fdf->line);
		fdf->ret = fdf->temp1;
		if (!(check_int(fdf, fdf->rows)))
			fdf->rows++;
	}
	if (fdf->retint < 0)
	{
		free(fdf->ret);
		free(fdf->line);
		return (2);
	}
	return (0);
}

void		split_into_array(t_fdf *fdf)
{
	fdf->temp = ft_strsplit(fdf->ret, ' ');
	free(fdf->ret);
	free(fdf->line);
	fdf->index = 0;
	while (fdf->temp[fdf->index])
	{
		if (!(check_int(fdf, fdf->index)))
			fdf->index++;
	}
}

int			read_initialise(t_fdf *fdf)
{
	fdf->fd = open(*fdf->fileinput, O_RDONLY);
	if (fdf->fd < 0)
		return_error(fdf, 1);
	if ((read_rows(fdf)) != 0)
		return_error(fdf, 2);
	if (close(fdf->fd) < 0)
		return_error(fdf, 1);
	split_into_array(fdf);
	if (((fdf->columns * fdf->rows)) == (fdf->index))
	{
		if (!(fdf->map = (t_vector *)ft_memalloc((sizeof(t_vector))
			* (fdf->rows * fdf->columns))))
		{
			free_2d_char_array(fdf->temp);
			return_error(fdf, 4);
		}
		fill_map_array(fdf);
	}
	else
	{
		free_2d_char_array(fdf->temp);
		return_error(fdf, 3);
	}
	return (0);
}

int			fill_map_array(t_fdf *fdf)
{
	fdf->index = 0;
	while (fdf->temp[fdf->index])
	{
		while (++fdf->rowindex < fdf->rows)
		{
			fdf->columnsindex = -1;
			while (++fdf->columnsindex < fdf->columns)
			{
				fdf->map[fdf->index].x = fdf->columnsindex;
				fdf->map[fdf->index].y = fdf->rowindex;
				if (!(check_int(fdf, ft_atoi(fdf->temp[fdf->index]))))
					fdf->map[fdf->index].z = ft_atoi(fdf->temp[fdf->index]);
				if ((fdf->map[fdf->index].color =
					ft_strstr(fdf->temp[fdf->index], "0x")) == NULL)
					fdf->map[fdf->index].colour = ft_atoi_base(fdf->color, 16);
				free(fdf->temp[fdf->index]);
				if (!(check_int(fdf, fdf->index)))
					fdf->index++;
			}
		}
	}
	free(fdf->temp);
	return (0);
}
