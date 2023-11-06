# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 12:05:45 by bchedru           #+#    #+#              #
#    Updated: 2023/11/06 14:25:14 by bchedru          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf ft_putnbr ft_putchar ft_putstr ft_strchr ft_atoi

INC_FILES = includes/libft.h

SRC = $(addprefix srcs/,$(addsuffix .c,$(SRCS)))
OBJ = $(addsuffix .o,$(SRCS))

CC = cc
CCFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) -o $@ $^ $(LFLAGS)
	ar -rcs $(NAME) $(OBJ) $(INC_FILES)

%.o: %.c
	$(CC) -c -o $@ $< $(CCFLAGS)

clean :
	rm -rf $(OBJ) $(BONUS_OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all re clean fclean