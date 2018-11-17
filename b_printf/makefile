# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamateo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/26 10:28:05 by mamateo           #+#    #+#              #
#    Updated: 2018/10/26 10:59:54 by mamateo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libftprintf.a

SRC = ft_charprint.c\
	  ft_ultoa_base.c\
	  b_printf.c\
	  ft_strprint.c\
	  ft_nbrprint.c\
	  ft_putchar.c\
	  ft_unsignedprint.c\
	  ft_hexaprint.c\
	  ft_octalprint.c\
	  ft_putstr.c\
	  ft_strlen.c\
	  ft_voidprint.c\

OBJ = ft_charprint.o\
	  ft_ultoa_base.o\
	  b_printf.o\
	  ft_strprint.o\
	  ft_nbrprint.o\
	  ft_putchar.o\
	  ft_unsignedprint.o\
	  ft_hexaprint.o\
	  ft_octalprint.o\
	  ft_putstr.o\
	  ft_strlen.o\
	  ft_voidprint.o\
	  
CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) printflib.h
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
