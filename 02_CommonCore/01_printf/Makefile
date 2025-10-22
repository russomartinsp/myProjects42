# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rusdos-s <rusdos-s@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/21 21:21:34 by marvin            #+#    #+#              #
#    Updated: 2025/10/22 10:58:08 by rusdos-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
AR = ar rcs

SRC = ft_print.c\
	vr_char.c\
	vr_string.c\
	vr_pointer.c\
	vr_dec.c\
	vr_int.c\
	vr_hexmin.c\
	vr_hexmai.c\
	vr_perc.c\

CFL = -Werror -Wextra -Wall

OBJ = $(SRC: .c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o %.c lib_print.h
	$(CC) $(CFL) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re