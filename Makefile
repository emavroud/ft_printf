# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/12 10:21:50 by emavroud          #+#    #+#              #
#    Updated: 2022/05/12 11:00:54 by emavroud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
DEPS = includes
LIBFT = libft
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC = ft_print_hex.c ft_print_ptr.c ft_print_unsigned.c ft_printf_utils.c ft_printf.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

${NAME}: ${OBJ}
	ar rc $(NAME) $(OBJ)

libft:
	$(LIBFT) $(MAKE)

clean:
	rm -f *.o

fclean:
	rm -f *.a

re:	fclean all
