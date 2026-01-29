NAME		= push_swap

CC		= cc
CFLAGS		= -Wall -Wextra -Werror
INCLUDES	= -Iincludes

SRC		= src/main/push_swap.c \
	 	  src/main/sort_dispatcher.c \
                  src/init/node.c \
                  src/init/init_stack.c \
                  src/operations/push.c \
                  src/operations/push_utils.c \
                  src/operations/swap.c \
                  src/operations/rotate.c \
                  src/sort/sort_3.c \
                  src/sort/sort_5.c \
                  src/sort/radix_sort.c \
                  src/utils/assign_index.c \
                  src/utils/stack_size.c \
                  src/utils/max_bit.c \
		  src/utils/ft_atol.c \
                  src/utils/find_position.c \
                  src/utils/bring_to_top.c \
                  src/utils/is_sorted.c \
		  src/utils/get_min.c \
                  src/free/free_stack.c \
		  src/error/check_args.c \
		  src/error/check_duplicate.c \
		  src/error/error_exit.c 

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(INCLUDES) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
