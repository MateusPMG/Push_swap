NAME = push_swap

CC = @cc

CFLAGS = -Wall -Wextra -Werror -g

RM = @rm -f

SRC = push_swap.c input_check.c input_check_utils.c utils.c initialize_stack.c stack_utils.c\
push.c sort_3_or_2.c reverse_rotate.c rotate.c swap.c sort_5_or_4.c sort_pick.c\
get_small_or_big.c

OBJ = $(SRC:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(OBJ) -o $(NAME) 

clean:
				$(RM) $(OBJ)

fclean: 		clean
				$(RM) $(NAME)

re:		fclean	$(NAME)