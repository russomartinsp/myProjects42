/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:02:15 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/06/16 17:30:59 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str [i] > 90)
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
	char	a[] = "ABCD";
	char	b[] = "1234";
	char	c[] = "ABcD";
	char	*d;

	d = "NULL";
	printf("%d \n", ft_str_is_uppercase(a));
	printf("%d \n", ft_str_is_uppercase(b));
	printf("%d \n", ft_str_is_uppercase(c));
	printf("%d \n", ft_str_is_uppercase(d));
}*/
