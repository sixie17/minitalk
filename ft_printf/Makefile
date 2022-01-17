# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysakine <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 12:13:58 by ysakine           #+#    #+#              #
#    Updated: 2021/11/25 12:14:00 by ysakine          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src := ft_printf.c ft_additional_functions.c ft_puthex.c\
ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c
cc := gcc
NAME := libftprintf.a
FLAGS := -Wall -Wextra -Werror
del := ft_putchar_fd.o ft_putnbr_fd.o ft_putstr_fd.o
objects := ${src:.c=.o}

all: ${NAME}
${NAME}: ${objects}
	${cc} -c ${FLAGS} ${src}
	ar rc libftprintf.a ${objects}
clean :
	rm -f ${objects}
	rm -f ${del}
fclean : clean
	rm -f ${NAME}
re : fclean ${NAME}
