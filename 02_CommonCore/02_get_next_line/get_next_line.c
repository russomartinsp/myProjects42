/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 18:00:47 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/09/18 18:36:54 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	A Função:
    {
	 Ele lê uma linha de um arquivo. Uma linha por vez;
	 Uma linha termina com '\n'.
	}
	Processo:
	{
		1. É indicado um arquivo para a função - vai ser aberto com open();
		2. É necessário um utilitário que conte os caracteres até um \n ou o final do arquivo;
		3. Com read(), o programa vai ler um número de bytes que vai dar o utilitário.;
		4. Como a função deve devolver uma string, o que foi lido pelo read() deve ser depositado numa 
		variável.
	}
	Meus Problemas:
	{
		* Ainda não sei porquê precisar ser uma var estática.
	}
*/
