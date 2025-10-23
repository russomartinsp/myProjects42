/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <rusdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:56:30 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/10/23 08:34:20 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	wh_f_is(const char f, va_list args);

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		cont;
	int		i;

	va_start(args, str);
	cont = 0;
	i = 0;
	while (str)
	{
		if (str[i] == '%')
		{
			i++;
			cont += wh_f_is(str[i], args);
		}
		else
		{
			cont++;
			write(1, &str[i], 1);
		}
		i++;
	}
	va_end(args);
	return (cont);
}

static int	wh_f_is(const char f, va_list args)
{
	int	result;

	result = 0;
	if (f == 'c')
		result += vr_char(va_arg(args, int));
	if (f == 'd' || f == 'i')
		result += vr_dec(va_arg(args, int));
	if (f == 'x' || f == 'X')
		result += vr_hex(va_arg(args, unsigned int), f);
	if (f == 'p')
		result += vr_point(va_arg(args, void *));
	if (f == 's')
		result += vr_str(va_arg(args, char *));
	if (f == 'u')
		result += vr_unsig(va_arg(args, unsigned int));
	if (f == '%')
		result = vr_char('%');
	return (result);
}
