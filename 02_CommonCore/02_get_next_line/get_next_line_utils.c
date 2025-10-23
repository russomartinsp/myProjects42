/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <rusdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:21:31 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/10/23 09:12:22 by rusdos-s         ###   ########.fr       */
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

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (s1)
		while (s1[++i] != '\0')
			str[i] = s1[i];
	while (s2[j] != '\0')
		str[i++] = s2[j++];
	str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (str);
}

char	*c_line(char *f)
{
	int		i;
	char	*str;

	i = 0;
	if (!f[i])
		return (NULL);
	while (f[i] != '\0' && f[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (f[i] != '\0' && f[i] != '\n')
	{
		str[i] = f[i];
		i++;
	}
	if (f[i] == '\n')
	{
		str[i] = f[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*up_file(char *f)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (f[i] != '\0' && f[i] != '\n')
		i++;
	if (!f[i])
	{
		free(f);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(f) - i + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (f[i] != '\0')
		str[j++] = f[++i];
	str[j] = '\0';
	free(f);
	return (str);
}
