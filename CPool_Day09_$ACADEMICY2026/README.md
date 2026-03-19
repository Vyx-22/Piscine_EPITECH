# 💻 CPool Day 09 — Structures

✨ **C Programming Project — Structs, Macros, Colors & Endianness** ✨

Ce projet a pour objectif de :

* manipuler les **structures en C**
* utiliser **macros** et **header files**
* gérer des **tableaux dynamiques de structures**
* travailler sur des **compositions de couleurs** et **changement d’endian**

---

# 📂 Project Structure

```bash
CPool_Day09_$ACADEMICYEAR
│
├── include/
│   ├── my.h                  # prototypes de libmy.a
│   └── my_macro_abs.h        # macro ABS
│
├── my_params_to_array.c      # Task 03
├── my_show_param_array.c     # Task 04
├── get_color.c               # Task 05
├── swap_endian_color.c       # Task 06
└── lib/
    └── my/
        └── libmy.a           # bibliothèque statique utilisée
```

---

# ⚙️ Compilation & Delivery

Toutes les sources doivent être compilables avec `libmy.a` :

```bash
cd task01
cc *.c -c -I../include/
cc *.o ../autograder/main_task01.o -L../lib/my/ -o task01 -lmy
```

**Règles importantes :**

* ✔️ Ne pas inclure `main.c` dans la livraison
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

## Task 01 — `my_macro_abs.h`

```c
#define ABS(value)
```

* Macro `ABS` : retourne la valeur absolue d’un argument
* **Delivery:** `include/my_macro_abs.h`

---

## Task 02 — `my.h`

* Contient les prototypes de toutes les fonctions de **libmy.a**
* **Delivery:** `include/my.h`

---

## Task 03 — `my_params_to_array`

```c
struct info_param *my_params_to_array(int ac, char **av);
```

* Transforme les arguments du programme en un **tableau de structures**
* Chaque structure contient : longueur, pointeur vers la chaîne, copie et tableau de mots (`my_str_to_word_array`)
* Le dernier élément doit avoir `str = 0` pour indiquer la fin
* **Delivery:** `my_params_to_array.c`

---

## Task 04 — `my_show_param_array`

```c
int my_show_param_array(struct info_param const *par);
```

* Affiche le contenu d’un tableau créé avec **Task 03**
* Pour chaque structure, afficher : le paramètre, sa taille, puis chaque mot
* **Delivery:** `my_show_param_array.c`

---

## Task 05 — `get_color`

```c
int get_color(unsigned char red, unsigned char green, unsigned char blue);
```

* Compose une couleur à partir de ses composantes RGB
* Doit être réalisé **uniquement avec des décalages de bits**
* **Delivery:** `get_color.c`

---

## Task 06 — `swap_endian_color`

```c
int swap_endian_color(int color);
```

* Change l’endian d’une couleur ARGB
* Doit être réalisé **uniquement avec une union**
* Travaille avec **big et little endian**
* **Delivery:** `swap_endian_color.c`

