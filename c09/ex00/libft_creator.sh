# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bchedru <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 16:18:19 by bchedru           #+#    #+#              #
#    Updated: 2023/08/30 16:18:50 by bchedru          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#!/bin/bash

SRC="ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c"
LIB_NAME="libft.a"

rm -rf *.o
cc -Wall -Wextra -Werror -c $SRC
ar rc $LIB_NAME *.o

rm -rf *.o