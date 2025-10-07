/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:56:30 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/10/07 19:31:55 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_print.h"

int	ft_print(const char *str, ...)
{
	va_list	args;
	char	*print;
	int	cont;
	int	i;

	va_start(args);
	cont = 0;
	while (str)
	{
		if (str[i] = "%")
		{
			if (checking (str[i + 1]) = )
			
		}
		cont++;
	}

	return (cont);
/*
	5. Ele vai pegar o que tiver no próximo arg e juntar com o tipo indentificado em 4, para escrever o que está ali e contar quantos carecteres tem ali;
	6. Ele vai continuar repetindo isso até chegar em um \0;
	7. O programa devolve o int com o número de caracteres escritos.
*/
}

int	checking(const char *var, int cont)
{
	
}
