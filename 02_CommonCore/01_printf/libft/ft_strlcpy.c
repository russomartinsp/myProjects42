/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:44:14 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/08/01 17:47:38 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (size != 0)
	{
		n = 0;
		while (src[n] != '\0' && n < (size - 1))
		{
			dst[n] = src[n];
			n++;
		}
		dst[n] = '\0';
	}
	return (i);
}
