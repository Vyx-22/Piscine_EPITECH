## Makefile
## File description:
## do-op makefile
##

NAME	=	do-op

SRC	=	main.c \
		# Ajoute ici d'autres .c si tu en crées (ex: operations.c)

OBJ	=	$(SRC:.c=.o)

# Chemins vers ta lib et tes includes créés par la Task 01
LDFLAGS	=	-L../lib/my -lmy
CPPFLAGS	=	-I../include

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(LDFLAGS) $(CPPFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
