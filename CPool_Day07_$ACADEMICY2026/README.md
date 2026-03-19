# 💻 CPool Day 07 — Libmy & Arguments

✨ **C Programming Project — Static Library & Command Line Arguments** ✨

Ce projet consiste à :

* créer une **bibliothèque statique (`libmy.a`)**
* regrouper toutes les fonctions développées précédemment
* apprendre à utiliser les **arguments du terminal (`argc`, `argv`)**

---

# 📑 Table of Contents

* [Project Structure](#-project-structure)
* [Library: libmy.a](#-library-libmya)
* [Functions Included](#-functions-included)
* [Additional Tasks](#-additional-tasks)
* [Programs with Arguments](#-programs-with-arguments)
* [Compilation](#-compilation)
* [Learning Goals](#-learning-goals)

---

# 📂 Project Structure

```id="a9x2lm"
CPool_Day07_$ACADEMICYEAR
│
├── lib/
│   └── my/
│       ├── *.c
│       ├── *.o
│       └── libmy.a
│
├── my_strcat.c
├── my_strncat.c
│
├── task04/
│   └── *.c
│
├── task05/
│   └── *.c
│
└── task06/
    └── *.c
```

---

# 📦 Library: libmy.a

La bibliothèque **`libmy.a`** contient **toutes les fonctions développées depuis le début du CPool**.

📍 Emplacement obligatoire :

```
lib/my/libmy.a
```

⚠️ Règles importantes :

* ✔️ Tous les fichiers `.c` doivent être dans `lib/my/`
* ✔️ La librairie doit contenir **toutes les fonctions demandées**
* ❌ Ne pas inclure `main.c`
* ❌ Ne pas dupliquer les fonctions dans d'autres fichiers après ce jour

---

# 🧠 Functions Included

La bibliothèque contient :

### 🔹 Fonctions de base

* `my_putchar`
* `my_isneg`
* `my_put_nbr`
* `my_swap`
* `my_putstr`
* `my_strlen`
* `my_getnbr`

---

### 🔹 Tableaux & maths

* `my_sort_int_array`
* `my_compute_power_rec`
* `my_compute_square_root`
* `my_is_prime`
* `my_find_prime_sup`

---

### 🔹 Manipulation de chaînes

* `my_strcpy`
* `my_strncpy`
* `my_revstr`
* `my_strstr`
* `my_strcmp`
* `my_strncmp`

---

### 🔹 Transformations

* `my_strupcase`
* `my_strlowcase`
* `my_strcapitalize`

---

### 🔹 Vérifications

* `my_str_isalpha`
* `my_str_isnum`
* `my_str_islower`
* `my_str_isupper`
* `my_str_isprintable`

---

### 🔹 Affichage avancé

* `my_showstr`
* `my_showmem`

---

### 🔹 Concaténation (Day07)

* `my_strcat`
* `my_strncat`

---

# 🧩 Additional Tasks

## Task 02 — my_strcat

```c id="1r4l0g"
char *my_strcat(char *dest, char const *src);
```

Concatène `src` à la fin de `dest`.

---

## Task 03 — my_strncat

```c id="7y42j2"
char *my_strncat(char *dest, char const *src, int nb);
```

Concatène **nb caractères** de `src` à `dest`.

---

# 💻 Programs with Arguments

---

## Task 04 — my_print_params

📁 `task04/`

Affiche tous les arguments passés au programme.

**Exemple :**

```bash id="ci9mpy"
./a.out test "Hello world" 42
```

**Sortie :**

```
./a.out
test
Hello world
42
```

---

## Task 05 — my_rev_params

📁 `task05/`

Affiche les arguments **en ordre inverse**.

**Exemple :**

```
42
Hello world
test
./a.out
```

---

## Task 06 — my_sort_params

📁 `task06/`

Affiche les arguments **triés en ordre ASCII**.

---

# ⚙️ Compilation

## 🔹 Créer la librairie

```bash id="7z3yqf"
gcc -c *.c
ar rc libmy.a *.o
```

---

## 🔹 Compiler avec la librairie

```bash id="l6ptnq"
gcc main.c -Llib/my -lmy
```

---

# 🚀 Learning Goals

Ce projet permet de maîtriser :

* 📦 création de **bibliothèques statiques**
* 🧠 organisation de projet en C
* 🔁 réutilisation de code
* 💻 gestion des **arguments du terminal**
* 🔧 compilation avancée avec `ar` et `gcc`