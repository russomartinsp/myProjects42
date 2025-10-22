/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 19:37:26 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/08/22 19:50:14 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*a;
	unsigned int	i;
	unsigned int	len;

	if (!s)
		return (0);
	len = ft_strlen(s);
	a = malloc (len * sizeof(char) + 1);
	if (!a)
		return (0);
	i = 0;
	while (i < len)
	{
		a[i] = (*f)(i, s[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}
