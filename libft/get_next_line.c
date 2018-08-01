/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cletinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 09:17:28 by cletinic          #+#    #+#             */
/*   Updated: 2018/07/09 15:29:59 by cletinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	A function that returns a line ending with a new line,
**	read from a file descriptor.
*/

#include "libft.h"

static int		ft_buffer(const int fd, char **s, char *buffer, int *readbytes)
{
	char		*temp;

	while (*readbytes > 0)
	{
		buffer[*readbytes] = '\0';
		temp = ft_strjoin(*s, buffer);
		ft_strdel(s);
		*s = temp;
		if (ft_strchr(buffer, '\n'))
			break ;
		*readbytes = read(fd, buffer, BUFF_SIZE);
	}
	return (*readbytes);
}

static int		ft_seeker(char **line, char **s)
{
	char		*str;
	char		*temp;
	int			length;

	length = 0;
	str = (char*)*s;
	while ((str[length] != '\n') && (str[length] != '\0'))
		length++;
	if (str[length] == '\n')
	{
		*line = ft_strndup(str, length);
		temp = ft_strdup(&str[length + 1]);
		ft_strdel(s);
		*s = temp;
		if (s[0] == '\0')
			ft_strdel(s);
	}
	else if (str[length] == '\0')
	{
		*line = ft_strdup(str);
		ft_strdel(s);
	}
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static char	*s = NULL;
	char		*buffer;
	int			readbytes;

	if (((!s) && (!(s = (char*)ft_memalloc(sizeof(*s))))) ||
		(!line) || (fd < 0) || (BUFF_SIZE < 0) ||
		(!(buffer = (char *)ft_memalloc(sizeof(*buffer) * (BUFF_SIZE + 1)))))
		return (-1);
	readbytes = read(fd, buffer, BUFF_SIZE);
	if (readbytes > 0)
		ft_buffer(fd, &s, buffer, &readbytes);
	if (readbytes < 0)
		return (-1);
	if (ft_strlen(s) == 0)
	{
		if (readbytes == 0)
			*line = ft_strdup("");
		free(buffer);
		free(s);
		return (0);
	}
	free(buffer);
	return (ft_seeker(line, &s));
}
