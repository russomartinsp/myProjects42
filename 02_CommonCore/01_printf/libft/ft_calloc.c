/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:30:52 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/08/11 18:28:14 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*nm;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (size != 0 && nmemb > ((size_t) - 1 / size))
		return (0);
	nm = (void *) malloc(nmemb * size);
	if (!nm)
		return (0);
	ft_bzero(nm, (nmemb * size));
	return (nm);
}
