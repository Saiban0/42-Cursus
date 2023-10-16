# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bchedru <bchedru@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 16:02:54 by bchedru           #+#    #+#              #
#    Updated: 2023/10/16 16:45:35 by bchedru          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILES	=	ft_isalpha.c, \
				ft_isdigit.c, \
				ft_isalnum.c, \
				ft_isascii.c, \
				ft_isprint.c, \
				ft_strlen.c, \
				ft_memset.c, \




INC_FILES	=	libft.h

SRCS		= $($(SRC_FILES))
OBJS		= $(SRCS:%.c=%.o)

CC		= cc
CFLAGS		= -Wall -Wextra -Werror

NAME		= libft.a

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $@ $^
	ar -rcs $(NAME) $(OBS) libft.h

%.o: %.c
	$(CC) -c -o $@ $< -I$(INC_DIR) $(CFLAGS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

.PHONY : all re

re : fclean all