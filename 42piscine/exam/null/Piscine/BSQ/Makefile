# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codebrai <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/18 16:28:01 by codebrai          #+#    #+#              #
#    Updated: 2019/09/18 23:32:03 by codebrai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	bsq
FLAGS		=	-Wall -Wextra -Werror
SRCS		=	main.c \
				checkmap.c \
				checkmap2.c \
				parsing.c \
				makegrid.c \
				findsquare.c \
				print.c \
				str_functions.c \
				mapsolution.c
OBJS		=	$(SRCS:.c=.o)
	INCLUDES	=	headers.h
	PATHSRCS	=	srcs/
	PATHINC		=	includes/
	PATHOBJS	=	objs/

all		: $(NAME)

$(NAME)	:
			gcc -c $(FLAGS) $(addprefix $(PATHSRCS), $(SRCS)) -I $(PATHINC)
			test -d $(PATHOBJS) || mkdir $(PATHOBJS)
			mv $(OBJS) $(PATHOBJS)
			gcc $(FLAGS) -o $(NAME) $(addprefix $(PATHOBJS), $(OBJS))
clean	:
	rm -rf $(OBJS)
	rm -rdf $(PATHOBJS)

fclean	: clean
	rm -rf $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
