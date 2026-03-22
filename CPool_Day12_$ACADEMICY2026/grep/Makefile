##
## EPITECH PROJECT, 202X
## CPool_Day12
## File description:
## Makefile for grep
##

# Le nom de ton gâteau final
NAME	=	grep

# Tes ingrédients (tous tes fichiers .c dans le dossier)
SRC	=	$(wildcard *.c)

# Les étapes de préparation (tes fichiers .o)
OBJ	=	$(SRC:.c=.o)

# Les épices (Flags de compilation)
# -I../include : dit à gcc d'aller chercher ton "my.h" dans le dossier include
CFLAGS	=	-Wall -Wextra -Werror -I../include

# Les ustensiles (Lien avec ta librairie)
# -L : chemin vers la lib, -lmy : utilise libmy.a
LDFLAGS	=	-L../lib/my -lmy

# 1. Règle par défaut
all:	$(NAME)

# 2. La règle magique (No Relink)
# Elle dit : "Pour faire 'grep', j'ai besoin des fichiers '.o'"
$(NAME):	$(OBJ)
	make -C ../lib/my
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

# 3. Nettoyer les fichiers temporaires (.o)
clean:
	make -C ../lib/my clean
	rm -f $(OBJ)

# 4. Nettoyer tout (objets + binaire)
fclean:	clean
	make -C ../lib/my fclean
	rm -f $(NAME)

# 5. Tout recommencer proprement
re:	fclean all

# 6. Lancer les tests unitaires
tests_run:
	gcc -o unit_tests $(SRC) ../tests/test_grep.c $(CFLAGS) $(LDFLAGS) --coverage -lcriterion -DUNIT_TEST
	./unit_tests

.PHONY: all clean fclean re tests_run
