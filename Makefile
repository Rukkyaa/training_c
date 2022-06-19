# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: rukkyaa <marvin@42.fr>                     +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2022/06/18 14:07:03 by rukkyaa           #+#    #+#             #
#   Updated: 2022/06/18 14:07:03 by rukkyaa          ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

SRCS	= main.c \
			src/ft_atoi.c \
			src/ft_factorial.c \
			src/ft_feynman_squares.c \
			src/ft_pow.c \
			src/ft_remove_whitespaces.c \
			src/ft_str_to_lower.c \
			src/ft_str_to_upper.c \
			src/ft_strcount.c \
			src/ft_strdup.c \
			src/ft_strlen.c

OBJS	= ${SRCS:.c=.o}

NAME	= lib_rukkyaa

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

INCL	= -I.

.c.o:
			${CC} ${CFLAGS} ${INCL} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${INCL} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
