# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfourie <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/23 17:04:52 by rfourie           #+#    #+#              #
#    Updated: 2018/05/31 17:20:13 by rfourie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS    = *.c

HEADER = libft.h

OBJ = *.o

FLAG = -Wall -Werror -Wextra

$(NAME):
	gcc $(FLAG) -c $(SRCS) -I $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
