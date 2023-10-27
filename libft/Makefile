# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 16:02:54 by bchedru           #+#    #+#              #
#    Updated: 2023/10/27 11:34:23 by bchedru          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_strlcat ft_atoi ft_bzero ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_memchr ft_memcmp ft_memcpy ft_memset ft_strchr ft_strlcpy ft_strlen ft_strncmp ft_strnstr ft_tolower ft_toupper ft_calloc ft_memmove ft_strdup ft_strrchr ft_substr ft_strjoin ft_strtrim ft_split ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_itoa
BONUS_SRCS = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter

INC_FILES = libft.h

SRC = $(addsuffix .c,$(SRCS))
OBJ = $(addsuffix .o,$(SRCS))
BONUS_SRC = $(addsuffix .c,$(BONUS_SRCS))
BONUS_OBJ = $(addsuffix .o,$(BONUS_SRCS))

CC = cc
CCFLAGS = -Wall -Wextra -Werror -g

NAME = libft.a

all: $(NAME)

bonus: $(NAME) $(BONUS_OBJ)
	ar -rcs $(NAME) $(BONUS_OBJ) $(INC_FILES)

$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ) $(INC_FILES)

%.o: %.c
	$(CC) -c -o $@ $< $(CCFLAGS)

clean :
	rm -rf $(OBJ) $(BONUS_OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all re clean fclean