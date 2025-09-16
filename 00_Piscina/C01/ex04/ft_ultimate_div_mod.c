/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 20:27:30 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/06/10 13:43:39 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
/*
int	main(void)
{
	int	d;
	int	e;

	d = 15;
	e = 2;

	printf ("O dividendo %d pelo divindindo %d é", d, e);
	ft_ultimate_div_mod(&d, &e);
	printf (" %d com resto de %d", d, e);
}*/
