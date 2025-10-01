/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:56:30 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/09/30 21:28:45 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_print.h"

int	ft_print(const char *str, ...)
{
/*
	1. Recebe um número variável de variáveis;
	2. A primeira var deve ser uma string;
	3. O programa tem quer cada char da string, contanto o número de caracteres;
	4. Ao encontrar um "%", ele checa o que há depois e isso vai definir o tipo de variável para o va_arg;
	5. Ele vai pegar o que tiver no próximo arg e juntar com o tipo indentificado em 4, para escrever o que está ali e contar quantos carecteres tem ali;
	6. Ele vai continuar repetindo isso até chegar em um \0;
	7. O programa devolve o int com o número de caracteres escritos.
*/
}
