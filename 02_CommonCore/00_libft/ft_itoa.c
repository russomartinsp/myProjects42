/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 19:16:08 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/08/22 18:38:22 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*recu(char *str, unsigned int n, long int i)
{
	while (n != 0)
	{
		str[i] = (n % 10) + '0';
		i--;
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*number;
	unsigned int	v;
	long int		i;

	number = (char *)malloc(nlen(n) + 1);
	if (!number)
		return (0);
	i = nlen(n);
	number[i] = '\0';
	i--;
	if (n == 0)
		number[0] = '0';
	if (n < 0)
	{
		number[0] = '-';
		v = n * -1;
	}
	else
		v = n;
	number = recu(number, v, i);
	return (number);
}
