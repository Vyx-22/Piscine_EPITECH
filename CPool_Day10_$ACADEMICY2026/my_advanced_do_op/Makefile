NAME = my_advanced_do-op

SRC = main.c my_add.c my_sub.c my_mul.c my_div.c my_mod.c my_usage.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror -Iinclude

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all