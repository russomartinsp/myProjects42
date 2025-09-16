/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 12:54:26 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/06/01 12:34:25 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	zeta;

	zeta = 'z';
	while (zeta >= 'a')
	{
		write (1, &zeta, 1);
		zeta--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}*/
