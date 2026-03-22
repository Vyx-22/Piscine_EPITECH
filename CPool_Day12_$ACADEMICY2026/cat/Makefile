##
## EPITECH PROJECT, 202X
## CPool_Day12
## File description:
## Makefile for cat
##

NAME    =   cat

# Récupère tous tes fichiers .c dans le dossier cat/
SRC     =   $(wildcard *.c)

# Transforme les .c en .o
OBJ     =   $(SRC:.c=.o)

# Flags : -I pour trouver tes prototypes dans le dossier include
CFLAGS  =   -Wall -Wextra -Werror -I../include

# Flags pour la lib : -L pour le chemin, -l pour le nom (my)
LDFLAGS =   -L../lib/my -lmy

all: $(NAME)

# Compilation du binaire (ne relink pas si les .o n'ont pas changé)
$(NAME): $(OBJ)
	make -C ../lib/my           # Compile la lib en premier
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

# Nettoyage des fichiers temporaires .o
clean:
	make -C ../lib/my clean
	rm -f $(OBJ)

# Nettoyage complet (objets + binaire)
fclean: clean
	make -C ../lib/my fclean
	rm -f $(NAME)

# Re-compilation propre
re: fclean all

# Règle pour lancer les tests unitaires (Task 02)
tests_run:
	gcc -o unit_tests $(SRC) ../tests/test_cat.c $(CFLAGS) $(LDFLAGS) --coverage -lcriterion
	./unit_tests

.PHONY: all clean fclean re tests_run
