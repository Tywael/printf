# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yalthaus <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/28 11:53:02 by yalthaus          #+#    #+#              #
#    Updated: 2021/10/31 17:04:20 by yalthaus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	ft_printf.c\
		ft_printf_utils.c\
		ft_printf_int.c\
		ft_printf_char.c\
		ft_printf_str.c\
		ft_printf_hex.c\
		ft_printf_unsigned.c

OBJ = ${SRC:.c=.o}

CC      = gcc
RM      = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJ}
	ar rcs ${NAME} ${OBJ}

all:	${NAME}

clean:
		${RM} ${OBJ}

fclean: clean
		${RM} ${NAME}

re:		fclean all
