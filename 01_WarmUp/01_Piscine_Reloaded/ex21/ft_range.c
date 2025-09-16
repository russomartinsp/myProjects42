/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 17:45:53 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/07/18 18:11:42 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	i = 0;
	result = (int *)malloc((max - min)*sizeof(int));
	while (min < max)
	{
		result[i] = min;	
		min++;
		i++;
	}
	return (result);
}
