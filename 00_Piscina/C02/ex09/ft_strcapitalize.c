/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:44:40 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/06/16 17:37:56 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < '0' || (str[i - 1] > '9'
					&& str[i - 1] < 'A') || (str[i - 1] > 'Z'
					&& str[i - 1] < 'a') || str[i - 1] > 'z')
					str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	frasea[] = "Quero ir pra casa, mas a 42me diverte";
	char	fraseb[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s\n", ft_strcapitalize(frasea));
	printf("%s", ft_strcapitalize(fraseb));
}*/
