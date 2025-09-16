/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:15:17 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/06/16 17:31:17 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	a[] = "abcd";
	char	b;
	char	c[] = "//][";
	char	*d;

	b = 2;
	d = NULL;
	printf("%d \n", ft_str_is_printable(a));
	printf("%d \n", ft_str_is_printable(&b));
	printf("%d \n", ft_str_is_printable(c));
	printf("%d \n", ft_str_is_printable(d));
}*/
