# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mianni <mianni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/03 13:12:22 by mianni            #+#    #+#              #
#    Updated: 2024/06/04 12:38:01 by mianni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES = ft_functions_file.c ft_putnbr_base.c ft_printf.c \

INCLUDES = ft_printf.h \

OBJECTS = $(SOURCES:.c=.o)

CC = cc

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -rcs $@ $?
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean::
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
