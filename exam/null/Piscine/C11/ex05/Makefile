# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/17 11:30:30 by flmarsil          #+#    #+#              #
#    Updated: 2019/09/19 15:09:35 by flmarsil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

NAME	= do-op

SRC	=	src/do_op.c\
		src/ft_atoi.c\
		src/ft_add.c\
		src/ft_div.c\
		src/ft_mod.c\
		src/ft_mul.c\
		src/ft_sub.c

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
