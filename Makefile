# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emavroud <emavroud@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/12 10:21:50 by emavroud          #+#    #+#              #
#    Updated: 2022/05/20 14:17:12 by emavroud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
DEPS = libft
LIBFT = libft
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC = ft_print_hex.c ft_print_ptr.c ft_print_unsigned.c ft_printf_utils.c ft_printf.c
AR = ar rc
OBJ = $(SRC:.c=.o)

all: $(NAME)

${NAME}: ${OBJ}
	make -C $(LIBFT)
	cp libft/libft.a .
	mv libft.a $(NAME)
	$(AR) $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean:
	rm -f *.a

re:	fclean all

.PHONY: clean fclean re