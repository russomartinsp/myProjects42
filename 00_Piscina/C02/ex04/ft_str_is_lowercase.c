/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 12:48:40 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/06/16 17:30:41 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
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
	char	b[] = "1234";
	char	c[] = "abCd";
	char	*d;

	d = NULL;
	printf("%d \n", ft_str_is_lowercase(a));
	printf("%d \n", ft_str_is_lowercase(b));
	printf("%d \n", ft_str_is_lowercase(c));
	printf("%d \n", ft_str_is_lowercase(d));
}*/
