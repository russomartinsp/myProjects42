# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rusdos-s <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/23 17:07:09 by rusdos-s          #+#    #+#              #
#    Updated: 2025/10/07 20:36:26 by rusdos-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_strlcpy.c\
	ft_strlen.c\
	ft_bzero.c\
	ft_memcpy.c\
	ft_memset.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strlcat.c\
	ft_memmove.c\
	ft_strncmp.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_strnstr.c\
	ft_atoi.c\
	ft_strdup.c\
	ft_calloc.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_itoa.c\
	ft_putnbr_fd.c\
	ft_strmapi.c\
	ft_striteri.c\

OBJ = $(SRC:.c=.o)

CFLAGS = -Werror -Wextra -Wall

all: $(NAME)

$(OBJ): %.o: %.c
	cc $(CFLAGS) -c $^ -I . -o $@

$(NAME): $(OBJ)
	ar rcs $@ $(OBJ)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
