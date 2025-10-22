/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <rusdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:56:30 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/10/21 21:34:48 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_print.h"

static int	wh_f_is(const char f, va_list args);

int	ft_print(const char *str, ...)
{
	va_list	args;
	int	cont;
	int	i;

	va_start(args);
	cont = 0;
	i = 0;
	while (str)
	{
		if (str[i] = "%")
		{
			i++;
			count += wh_f_is(str[i], args);
		}
		else
		{
			count++;
			write(1, &str[i], 1);
		}
		i++;
	}
	va_end(args)
	return (cont);
}

static int	wh_f_is(const char f, va_list args)
{
	if (f == 'c')
		return (vr_char(va_arg(args, int)));
	if (f == 's')
		return (vr_str(va_arg(args, char *)));
	if (f == 'd')
		return (vr_dec(va_args(args, int)));
	if (f == 'x' || f == 'X')
		return (vr_hex(va_args(args, unsigned int), f));
	if (f == 'p')
		return (vr_point(va_args(args, void *)));
	if (f == 'u')
		return (vr_unsig(va_args(args, unsigned int)));
	if (f == '%')
		return (ft_print_char('%'));
	return (0);
}
