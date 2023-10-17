# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 16:02:54 by bchedru           #+#    #+#              #
#    Updated: 2023/10/17 14:42:03 by bchedru          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isascii ft_strncmp ft_tolower ft_isalnum ft_isdigit ft_strchr ft_strrchr ft_toupper ft_isalpha ft_isprint ft_strlen ft_strnstr

INC_FILES = libft.h

SRC = $(addsuffix .c,$(SRCS))
OBJ = $(addsuffix .o,$(SRCS))

CC = cc
CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME) : $(OBJ)
    ar -rcs $(NAME) $(OBJ) $(INC_FILES)

%.o: %.c
    $(CC) -c -o $@ $< $(CCFLAGS)

clean :
    rm -rf $(OBJ)

fclean : clean
    rm -rf $(NAME)

re : fclean all

.PHONY : all re clean fclean