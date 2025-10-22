/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vr_unsig.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <rusdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:35:17 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/10/21 21:35:17 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	nbr_len(unsigned int n);

int	vr_unsig(unsigned int u)
{
	if (u == 0)
		return (write(1, "0", 1));
	return (nbr_len(n));
}

static int	nbr_len(unsigned int n)
{
	int	l;

	l = 0;
	if (n >= 10)
	{
		l += unbr_len(n / 10);
	}
	l += unsig((n % 10) + '0');
	return (l);
}
