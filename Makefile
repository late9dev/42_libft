# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwarlop <lwarlop@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 14:19:10 by lwarlop           #+#    #+#              #
#    Updated: 2023/12/12 15:35:24 by lwarlop          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_toupper.c ft_tolower.c \
	  ft_strchr.c ft_strrchr.c ft_strlen.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
	  ft_memcpy.c ft_memset.c ft_memchr.c ft_memcmp.c ft_memmove.c \
	  ft_bzero.c

OBJS = $(SRC:.c=.o)

CCFLAGS = -Wall -Wextra -Werror

CC = cc

HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

main: $(NAME)
	$(CC) $(CCFLAGS) main.c -L. -lft -o test

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
