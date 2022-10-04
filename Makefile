# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aquintil <aquintil@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 16:45:28 by aquintil          #+#    #+#              #
#    Updated: 2022/09/27 09:38:45 by aquintil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_strlen.c\
	  ft_memset.c\
	  ft_bzero.c\
	  ft_memcpy.c\
	  ft_memmove.c\
	  ft_strlcpy.c\
	  ft_strlcat.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strncmp.c
OBJS	= $(SRCS:.c=.o)
NAME	= libft.a
INCLUDE = libft.h
CC	= gcc
CFLAGS	= -Wall -Werror -Wextra
RM	= rm -rf

$(NAME): $(OBJS) $(INCLUDE)
	ar -rcs $(NAME) $(OBJS)
	ranlib	$(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

.PHONY: all clean fclean re

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all


