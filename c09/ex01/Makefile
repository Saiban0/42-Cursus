#<nom de la cmd> : dependances de la cmd
	#commande

SRC_DIR		= srcs
INC_DIR		= includes

SRC_FILES	=	ft_putchar.c \
 				ft_swap.c, \
 				ft_putstr.c, \
 				ft_strlen.c, \
 				ft_strcmp.c

SRCS		= $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS		= $(SRCS:%.c=%.o)

GCC			= gcc
CFLAGS		= -Wall -Wextra -Werror

EXEC		= libft.a

all: $(EXEC)

$(EXEC): $(OBJS)
	$(GCC) -o $@ $^

%.o: %.c
	$(GCC) -c -o $@ $< -I$(INC_DIR) $(CFLAGS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(EXEC)