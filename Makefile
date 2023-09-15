# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 10:11:46 by bautrodr          #+#    #+#              #
#    Updated: 2023/09/15 13:21:39 by bautrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_calloc.c \
	   ft_isdigit.c \
	   ft_memcpy.c \
	   ft_strdup.c \
	   ft_strlen.c \
	   ft_strtrim.c \
	   ft_isalnum.c \
	   ft_isprint.c \
	   ft_memmove.c \
	   ft_strjoin.c \
	   ft_strncmp.c \
	   ft_substr.c \
	   ft_atoi.c \
	   ft_isalpha.c \
	   ft_memchr.c \
	   ft_memset.c \
	   ft_strlcat.c \
	   ft_strnstr.c \
	   ft_tolower.c \
	   ft_bzero.c \
	   ft_isascii.c \
	   ft_memcmp.c \
	   ft_strchr.c \
	   ft_strlcpy.c \
	   ft_strrchr.c \
	   ft_toupper.c \

FLAGS = -Wall -Wextra -Werror -I libft.h
OBJS = $(SRCS:.c=.o)
all: $(NAME)
CC = gcc

%.o:%.c Makefile libft.h
	$(CC) $(FLAGS) -I ./ -c $< -o $@

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PONY: all clean fclean re
