# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/12 10:21:50 by emavroud          #+#    #+#              #
#    Updated: 2022/05/12 11:32:11 by emavroud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
DEPS = ft_printf.h libft.h
LIBFT = libft
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC = ft_print_hex.c ft_print_ptr.c ft_print_unsigned.c ft_printf_utils.c ft_printf.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

${NAME}: ${OBJ}
	ar rc $(NAME) $(OBJ) $< -o $@


libft:
	$(LIBFT) $(MAKE)

clean:
	rm -f *.o

fclean:
	rm -f *.a

re:	fclean all
