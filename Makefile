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
SRCS = ft_isalpha.c ft_isprint.c ft_memset.c ft_strlen.c ft_bzero.c ft_isascii.c ft_memcpy.c ft_strlcat.c ft_isalnum.c ft_isdigit.c ft_memmove.c ft_strlcpy.c 

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
