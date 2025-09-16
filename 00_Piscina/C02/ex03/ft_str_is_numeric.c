/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 20:45:56 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/06/16 17:29:41 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
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
	char	a[] = "abate";
	char	b[] = "12435";
	char	c[] = "12c45";
	char	d[] = "";

	printf("%d", ft_str_is_numeric(a));
	printf("%d", ft_str_is_numeric(b));
	printf("%d", ft_str_is_numeric(c));
	printf("%d", ft_str_is_numeric(d));
}*/
