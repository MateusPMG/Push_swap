NAME = push_swap.a

CC = CC

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = push_swap.c input_check.c input_check_utils.c utils.c initialize_stack.c

OBJ = $(SRC:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJ)
		ar rcs	$(NAME) $(OBJ)

clean:
				$(RM) $(OBJ)

fclean: clean
				$(RM) $(NAME)

re:		fclean	$(NAME)