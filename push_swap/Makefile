# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qdenizar <qdenizar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 15:31:15 by qdenizar          #+#    #+#              #
#    Updated: 2023/02/03 16:58:47 by qdenizar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.c utils.c utils_two.c utils_3.c check_arg.c check_arg2.c \
how_much_number.c stock_and_convert.c \

NAME = push_swap

OBJS = ${SRC:.c=.o}
	
CC = gcc

CFLAGS = -Wall -Werror -Wextra -g3

FT_PRINTF = ft_printf/libftprintf.a

RM = rm -f

all: ${NAME}

$(NAME):	${OBJS}
	${MAKE} -C ft_printf
	${CC} ${CFLAGS}  ${OBJS} ${FT_PRINTF} -o ${NAME}
	
debug:	${OBJS}
	${MAKE} -C ft_printf
	${CC} ${CFLAGS}  ${OBJS} ${FT_PRINTF} -fsanitize=address -o ${NAME}

clean:
	${RM} ${OBJS}
	${MAKE} -C ft_printf clean

fclean:	clean
	${RM} ${NAME}
	${MAKE} -C ft_printf fclean


re:		fclean all

.PHONY: all clean fclean re libmlx