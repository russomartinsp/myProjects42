/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:36:29 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/06/05 15:00:15 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write (1, "P", 1);
	}
	if (n < 0)
	{
		write (1, "N", 1);
	}
}

/*
int	main(void)
{
	int	A;
	int	B;
	int	C;

	A = -42;
	B = 0;
	C = 42;

	ft_is_negative(A);
	ft_is_negative(B);
	ft_is_negative(C);
}*/
