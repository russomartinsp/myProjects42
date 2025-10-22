/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vr_dec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <rusdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:34:54 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/10/21 21:34:54 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nbr_print(int n);

static int	vr_dec(int d)
{
	int		l;
	long	nbr;

	nbr = d;
	l = 0 ;
	if (nbr < 0)
	{
		l += write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		l += nbr_print(nbr / 10);
	}
	l += ft_print_char((nbr % 10) + '0');
	return (l);
}

int	nbr_print(int n)
{
	if (n == 0)
		return (write(1, "0", 1));
	return (nbr_print(n));
}