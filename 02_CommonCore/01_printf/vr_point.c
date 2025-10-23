/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vr_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <rusdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:35:12 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/10/21 21:35:12 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ptr_len(unsigned long long n);

int	vr_point(void *ptr)
{
	unsigned long long		p;
	int						l;

	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	p = (unsigned long long)ptr;
	l = 0;
	l += write(1, "0x", 2);
	l += ptr_len(p);
	return (l);
}

static int	ptr_len(unsigned long long n)
{
	int		l;
	char	*b;

	l = 0;
	b = "0123456789abcdef";
	if (n >= 16)
		l += ptr_len(n / 16);
	l += vr_char(b[n % 16]);
	return (l);
}
