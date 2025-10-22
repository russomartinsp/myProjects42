/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vr_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <rusdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:34:58 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/10/21 21:34:58 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_f(unsigned int n, const char *b);

int	vr_hex(unsigned int n, char format)
{
	if (n == 0)
		return (write(1, "0", 1));
	if (format == 'x')
		return (hex_f(n, "0123456789abcdef"));
	else
		return (hex_f(n, "0123456789ABCDEF"));
}

static int	hex_f(unsigned int n, const char *b)
{
	int	l;

	l = 0;
	if (n >= 16)
		l += hex_f(n / 16, b);
	l += vr_char(b[n % 16]);
	return (l);
}
