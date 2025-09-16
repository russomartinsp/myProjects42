/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 20:08:13 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/06/10 13:41:16 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	op;
	int	res;
	int	endo = 45;
	int	dido = 2;

	ft_div_mod(endo, dido, &op, &res);
	printf("%d dividido por %d = %d e tem resto de %d", endo, dido, op, res);
}*/
