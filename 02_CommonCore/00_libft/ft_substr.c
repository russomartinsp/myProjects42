/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:28:30 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/08/15 15:59:42 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	j;

	j = ft_strlen((char *)s);
	if (start >= j)
		return (ft_strdup(""));
	if (len > j - start)
	{
		len = j - start;
	}
	sub = malloc(len + 1);
	if (!sub || !s)
		return (0);
	ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}
