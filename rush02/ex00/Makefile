#<nom de la cmd> : dependances de la cmd
	#commande

SRC_DIR		= srcs
INC_DIR		= includes

SRC_FILES	=	main.c \
				create_strct.c \
				fake_split.c \
				file_nr.c \
				ft_atoi.c \
				ft_process_file.c \
				ft_putstr.c \
				ft_str_is_numeric.c \
				ft_strdup.c \
				ft_strlen.c 

SRCS		= $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS		= $(SRCS:%.c=%.o)

CC			= cc
CFLAGS		= -Wall -Wextra -Werror

EXEC		= rush-02
DEBUG		= debug

all: $(EXEC)
debug: $(DEBUG)

$(EXEC): $(OBJS)
	$(CC) -o $@ $^ $(LFLAGS)

$(DEBUG) : $(OBJS)
	$(CC) -g -o $@ $^ $(LFLAGS) 

%.o: %.c
	$(CC) -c -o $@ $< -I$(INC_DIR) $(CFLAGS)

fclean :
	rm -rf $(OBJS)

mrproper : fclean
	rm -rf $(EXEC) $(DEBUG)
	
zip : mrproper
	tar -cf ex00.tar *
