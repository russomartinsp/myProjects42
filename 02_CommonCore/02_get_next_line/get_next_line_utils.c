/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:21:31 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/10/16 19:04:41 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char )c == '\0')
		return ((char *)s);
	return (NULL);
}

static char	*ft_strdup(char *str, char *s1, char *s2)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (s1[++i])
		str[i] == s1[i];
	j = -1;
	while (s2[++j])
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	str;

	if (!s1)
	{
		s1 = (char *)malloc(1);
		if (!s1)
			return (NULL);
		*s1 = '\0';
	}
	if (!s2)
		return (s1);
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	str = ft_strdup(str, s1, s2);
	free(s1);
	return (str);
}
