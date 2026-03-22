# Nom de la librairie
NAME = libmy.a

# Tous les fichiers .c du dossier automatiquement
SRC = $(wildcard *.c)

# Fichiers objets correspondants
OBJ = $(SRC:.c=.o)

# Compilateur et options
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

# Cible par défaut : tout construire
all: $(NAME)

# Construire la librairie statique
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Compiler les .c en .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Supprimer fichiers objets
clean:
	rm -f $(OBJ)

# Supprimer objets + librairie
fclean: clean
	rm -f $(NAME)

# Tout reconstruire
re: fclean all