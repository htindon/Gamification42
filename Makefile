# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htindon <htindon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/26 00:31:50 by htindon           #+#    #+#              #
#    Updated: 2014/02/03 06:30:23 by htindon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc
CFLAGS	+=	-Wall -Wextra -Werror -I./libft

NAME	=	Gamification42

SRC		=	main.c \
			libgam/readfile.c \
			libgam/writefile.c

OBJS	=	$(SRC:.c=.o)


srcs/%.o	:	%.c
				$(CC) $(CFLAGS) -L ./libft -lft -I -c $<

$(NAME)		:	$(OBJS)
				make -C ./libft/ all
				$(CC) $(CFLAGS) -o $(NAME) -L ./libft -lft $(OBJS)

all			:	$(NAME)

clean		:
				/bin/rm -f $(OBJS)
				make -C ./libft clean

fclean		:	clean
				/bin/rm -f $(NAME)
				make -C ./libft fclean

re			:	fclean all

.PHONY		:	fclean all re make
