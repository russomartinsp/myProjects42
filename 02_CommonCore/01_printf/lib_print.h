/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_print.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <rusdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:39:51 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/10/22 11:20:53 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_PRINT_H
# define LIB_PRINT_HI

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

int	ft_print(const char *, ...);
int	vr_char(int c);
static int	vr_dec(int d);
int	vr_hex(unsigned int h, char f);
int	vr_point(void *ptr);
int	vr_str(char *str);
int	unsig(unsigned int u);

#endif
