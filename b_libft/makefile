# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matmateo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/06 17:32:51 by matmateo          #+#    #+#              #
#    Updated: 2018/10/04 14:51:06 by mamateo          ###   ########.fr        #
#    Updated: 2018/09/29 16:28:19 by mamateo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

HEADER = libft.h

CFLAGS = -Wall -Wextra -Werror -c

CFILES = ft_isdigit.c\
		 ft_tolower.c\
		 ft_toupper.c\
		 ft_memset.c\
		 ft_strchr.c\
		 ft_strcpy.c\
		 ft_strcmp.c\
		 ft_strlen.c\
		 ft_strncpy.c\
		 ft_strdup.c\

OBJECTS = $(CFILES:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(CFILES) -I $(HEADER)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
