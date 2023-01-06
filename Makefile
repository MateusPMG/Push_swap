NAME = push_swap.a

CC = CC

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = 

OBJ = $(SRC:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJ)
		ar rcs	$(NAME) $(OBJ)

clean:
				$(RM) $(OBJ)

fclean: clean
				$(RM) $(NAME)

re:		fclean	$(NAME)