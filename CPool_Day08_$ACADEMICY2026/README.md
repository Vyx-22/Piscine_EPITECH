# 💻 CPool Day 08 — Compilation & Allocation

✨ **C Programming Project — Memory Allocation & String Manipulation** ✨

Ce projet a pour objectif de :

* gérer la **compilation correcte des fichiers C**
* utiliser **malloc/free** pour l’allocation dynamique
* manipuler **chaînes et tableaux de chaînes**
* travailler avec les **arguments passés au programme**

---

# 📑 Table of Contents

* [Project Structure](#-project-structure)
* [Compilation & Delivery](#-compilation--delivery)
* [Allowed Functions](#-allowed-functions)
* [Tasks Overview](#-tasks-overview)
* [Learning Goals](#-learning-goals)

---

# 📂 Project Structure

```bash
CPool_Day08_$ACADEMICYEAR
│
├── lib/
│   └── my/
│       └── libmy.a         # bibliothèque statique
│
├── include/
│   └── *.h                 # fichiers header si nécessaire
│
├── my_strdup.c             # Task 01
├── concat_params.c         # Task 02
├── my_show_word_array.c    # Task 03
├── my_str_to_word_array.c  # Task 04
├── convert_base.c          # Task 05
└── main.c                  # utilisé pour tests, non livré
```

---

# ⚙️ Compilation & Delivery

Toutes les sources doivent pouvoir être compilées avec `libmy.a` :

```bash
cd task01
cc *.c -c -I../include/
cc *.o ../autograder/main_task01.o -L../lib/my/ -o task01 -lmy
```

**Règles importantes :**

* ✔️ N’envoyez pas votre `main.c` dans le dossier de livraison
* ✔️ Tous les fichiers `.c` doivent compiler correctement
* ✔️ `.h` doivent être dans `include/` si utilisés
* ❌ Pas de fichiers binaires, objets temporaires ou inutiles

---

# 🔹 Allowed System Functions

* `write`
* `malloc`
* `free`

---

# 🧩 Tasks Overview

---

## Task 01 — `my_strdup`

```c
char *my_strdup(char const *src);
```

* Alloue dynamiquement de la mémoire et copie la chaîne `src` dedans
* Retourne un pointeur vers la nouvelle chaîne

**Delivery:** `my_strdup.c`

---

## Task 02 — `concat_params`

```c
char *concat_params(int argc, char **argv);
```

* Transforme tous les arguments passés au programme en **une seule chaîne**
* Les arguments sont séparés par `\n`
* Exemple :

```bash
./concat_params toto titi
```

Sortie :

```
./concat_params$
toto$
titi$
```

**Delivery:** `concat_params.c`

---

## Task 03 — `my_show_word_array`

```c
int my_show_word_array(char *const *tab);
```

* Affiche un **tableau de mots**, un mot par ligne
* Chaque mot se termine par `\n`
* Exemple :

```c
char *test_word_array[] = { "The", "Answer", "to", "Life", 0 };
my_show_word_array(test_word_array);
```

**Delivery:** `my_show_word_array.c`

---

## Task 04 — `my_str_to_word_array`

```c
char **my_str_to_word_array(char const *str);
```

* Découpe une chaîne en **mots**, séparés par tous les caractères non alphanumériques
* Retourne un tableau de chaînes, **terminé par NULL**

**Delivery:** `my_str_to_word_array.c`

---

## Task 05 — `convert_base`

```c
char *convert_base(char const *nbr, char const *base_from, char const *base_to);
```

* Convertit un nombre représenté sous forme de chaîne d’une base (`base_from`) vers une autre (`base_to`)
* Retourne une **chaîne nouvellement allouée** avec le résultat

**Delivery:** `convert_base.c`

