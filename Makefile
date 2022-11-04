# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aquintil <aquintil@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 16:45:28 by aquintil          #+#    #+#              #
#    Updated: 2022/11/04 07:22:23 by aquintil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_isalpha.c\
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
	  		ft_strncmp.c\
	  		ft_memchr.c\
	  		ft_memcmp.c\
	  		ft_strnstr.c\
	  		ft_atoi.c\
	  		ft_calloc.c\
	  		ft_strdup.c\
	  		ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c

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


