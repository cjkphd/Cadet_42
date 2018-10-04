# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matmateo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/06 17:32:51 by matmateo          #+#    #+#              #
#    Updated: 2018/10/04 15:07:26 by mamateo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

HEADER = includes/

CFLAGS = -Wall -Wextra -Werror -c

CFILES = srcs/ft_isdigit.c\
		 srcs/ft_tolower.c\
		 srcs/ft_toupper.c\
		 srcs/ft_memset.c\
		 srcs/ft_strchr.c\
		 srcs/ft_strcpy.c\
		 srcs/ft_strcmp.c\
		 srcs/ft_strlen.c\
		 srcs/ft_strncpy.c\
		 srcs/ft_strdup.c\
		 
OBJECTS = ft_isdigit.o\
		  ft_tolower.o\
		  ft_toupper.o\
		  ft_memset.o\
		  ft_strchr.o\
		  ft_strcpy.o\
		  ft_strcmp.o\
		  ft_strlen.o\
		  ft_strncpy.o\
		  ft_strdup.o\

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(CFILES) -I$(HEADER)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
