# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/13 17:50:15 by flmarsil          #+#    #+#              #
#    Updated: 2019/09/13 21:24:05 by flmarsil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

HEADER	=	./includes

SRCS	=	./srcs/ft_putchar.c\
 			./srcs/ft_swap.c\
			./srcs/ft_putstr.c\
			./srcs/ft_strlen.c\
			./srcs/ft_strcmp.c\

OBJ		=	${SRCS:.c=.o}

all		:	${NAME}

.c.o:
		gcc -c ${CFLAGS} -I ${HEADER} $< -o ${<:.c=.o}

${NAME}	:	${OBJ}
				ar rc ${NAME} ${OBJ}

clean 	:
			${RM} ${OBJ}

fclean 	: 	clean
				${RM} ${NAME}

re 		: 	fclean all
