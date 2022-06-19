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
			ft_atoi.c \
			ft_factorial.c \
			ft_feynman_squares.c \
			ft_pow.c \
			ft_remove_whitespaces.c \
			ft_str_to_lower.c \
			ft_str_to_upper.c \
			ft_strcount.c \
			ft_strdup.c \
			ft_strlen.c

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
