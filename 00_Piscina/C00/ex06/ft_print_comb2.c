/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 11:40:23 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/06/05 11:36:43 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchars(char a[2], char b[2])
{
	write (1, a, 2);
	write (1, " ", 1);
	write (1, b, 2);
	if (!(a[0] == '9' && a[1] == '8' && b[0] == '9' && b[1] == '9'))
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char	pri[2];
	char	seg[2];

	pri[0] = '0';
	while (pri[0] <= '9')
	{
		pri[1] = '0';
		while (pri[1] <= '8')
		{
			seg[0] = '0';
			while (seg[0] <= '9')
			{
				seg[1] = pri[1] + 1;
				while (seg[1] <= '9')
				{
					ft_putchars(pri, seg);
					seg[1]++;
				}
				seg[0]++;
			}
			pri[1]++;
		}	
		pri[0]++;
	}
}
