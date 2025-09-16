/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:34:22 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/06/10 13:36:19 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}
/*
int	main(void)
{
	int	c;
	int	d;
	int*	e;
	int*	f;

	c = 42;
	d = 24;
	e = &c;
	f = &d;

	printf ("A ordem estava: %d %d\n", c, d);
	ft_swap(e, f);
	printf ("A ordem deveria ser: %d %d", *e, *f);
}*/
