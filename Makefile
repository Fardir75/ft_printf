# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/07 11:21:47 by eavilov           #+#    #+#              #
#    Updated: 2022/08/07 11:22:09 by eavilov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libftprintf.a
SRCS	= ./ft_putnbr_long.c ./ft_count.c ./ft_printXhexa.c ./ft_printf.c ./ft_printvoidhexa.c ./ft_strlen.c ./ft_putnbr_base.c ./ft_printhexa.c ./ft_printunsigned.c ./ft_putnbr.c ./ft_putchar.c ./ft_putstr.c ./ft_printstr.c ./ft_printnbr.c ./ft_printchar.c 

OBJS	= $(SRCS:.c=.o)
CFLAGS  = -Wall -Wextra -Werror
RM		= rm -f

%.o: %.c ft_print.h
	gcc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS} 

fclean:	clean
	${RM} ${NAME}

re: fclean all

.PHONY: re all fclean clean
