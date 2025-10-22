/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rusdos-s <rusdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:44:58 by rusdos-s          #+#    #+#             */
/*   Updated: 2025/10/22 20:29:39 by rusdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"

int	ft_printf(const char *str, ...);
int	vr_char(int c);
int	vr_hex(unsigned int h, char f);
int	vr_point(void *ptr);
int	vr_str(char *str);
int	vr_unsig(unsigned int u);
int	vr_dec(int d);

#endif
