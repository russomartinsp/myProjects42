/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 04:02:02 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/06/19 17:59:28 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*cmp(char *str, char *to_find, int i, int j)
{
	while (to_find[j] != '\0')
	{
		if (str[i] == to_find[j])
		{
			i++;
			j++;
		}
		else
			break ;
	}
	if (to_find[j] == '\0')
		return (&str[i - j]);
	return ((void *)0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int			j;
	int			i;
	char		*k;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (*str != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			k = cmp(str, to_find, i, j);
			return (k);
		}
		str++;
	}
	return ((void *)0);
}
/*
int	main(void)
{
	printf("%s", ft_strstr("hello world", "wor"));
}*/
