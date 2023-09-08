# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 10:11:46 by bautrodr          #+#    #+#              #
#    Updated: 2023/09/06 13:08:57 by bautrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = *.c

FLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)
all: $(NAME)
CC = gcc

$(NAME):
	$(CC) -c $(FLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
