# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 16:02:54 by bchedru           #+#    #+#              #
#    Updated: 2023/10/17 12:12:07 by bchedru          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


INC_FILES = libft.h

SRC = $($(SRC_FILES))
OBJ = $(SRC:%.c=%.o)

CC = cc
CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME) : $(OBJ)
    ar -rcs $(NAME) -I$(OBJ) $(INC_FILES)

%.o: %.c
    $(CC) -c -o $@ $< $(INC_DIR) $(CCFLAGS)

clean :
    rm -rf $(OBJ)

fclean : clean
    rm -rf $(NAME)

re : fclean all

.PHONY : all re clean fclean