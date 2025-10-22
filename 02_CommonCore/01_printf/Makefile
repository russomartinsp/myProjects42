# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rusdos-s <rusdos-s@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/21 21:21:34 by marvin            #+#    #+#              #
#    Updated: 2025/10/22 20:31:40 by rusdos-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT = libft.a
ARLIB = ./libft
CC = gcc -Werror -Wextra -Wall
SRC = ft_printf.c \
	vr_char.c \
	vr_dec.c \
	vr_hex.c \
	vr_point.c \
	vr_str.c \
	vr_unsig.c
OBJ = $(SRC:.c=.o)

%.o: %.c ft_printf.h
	${CC} -I -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(ARLIB)
	@cp $(ARLIB)/$(LIBFT) .
	@mv $(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	cd $(ARLIB) && make clean

fclean: clean
	rm -f $(NAME)
	cd $(ARLIB) && make fclean

re: fclean all

.PHONY: all clean fclean re