NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = push_swap.c input_check.c input_check_utils.c utils.c initialize_stack.c stack_utils.c

OBJ = $(SRC:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(OBJ) -o $(NAME) 

clean:
				$(RM) $(OBJ)

fclean: 		clean
				$(RM) $(NAME)

re:		fclean	$(NAME)