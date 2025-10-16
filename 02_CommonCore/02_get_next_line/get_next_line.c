/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 20:41:48 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/10/16 20:30:49 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_stash(char *stash, char *ptr_nline);
static char	*ft_line(char *stash);
static char	*ft_gbuf(char *stash, char *buf, ssize_t bts);
static char	*ft_readgzero(int fd, char *stash);

char	*get_next_line(int fd)
{
	static char		*stash;
	char			*l;
	char			*buf;

	buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(buf);
		return (0);
	}
}
