/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <rusdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 20:41:48 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/10/23 09:10:57 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*r_file(int fd, char *f);

char	*get_next_line(int fd)
{
	char		*l;
	static char	*f;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	f = r_file(fd, f);
	if (!f)
		return (NULL);
	l = c_line(f);
	f = up_file(f);
	return (l);
}

char	*r_file(int fd, char *f)
{
	char	*buff;
	int		b_read;

	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	b_read = 1;
	while (!ft_strchr(f, '\n') && b_read != 0)
	{
		b_read = read(fd, buff, BUFFER_SIZE);
		if (b_read == -1)
		{
			free(buff);
			free(f);
			return (NULL);
		}
		buff[b_read] = '\0';
		f = ft_strjoin(f, buff);
	}
	free(buff);
	return (f);
}
