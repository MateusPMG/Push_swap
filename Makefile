NAME = push_swap

CC = @cc

CFLAGS = -Wall -Wextra -Werror -g

RM = @rm -f

SRC = push_swap.c input_check.c input_check_utils.c utils.c initialize_stack.c stack_utils.c\
push.c sort_3_or_2.c reverse_rotate.c rotate.c swap.c sort_4.c sort_pick.c\
get_small_or_big.c sort_5.c cost.c cost_utils.c algorithm.c do_moves.c\
do_moves_above_utils.c do_moves_below_utils.c

OBJ = $(SRC:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(OBJ) -o $(NAME) -fsanitize=address

clean:
				$(RM) $(OBJ)

fclean: 		clean
				$(RM) $(NAME)

re:		fclean	$(NAME)