# 💻 CPool Day 10 — Makefile & do-ops

✨ **C Programming Project — Makefile, Function Pointers, Sorting & Advanced do-op** ✨

Ce projet a pour objectif de :

* gérer la compilation avec un **Makefile efficace**
* créer un **programme do-op** capable de calculer des opérations sur deux entiers
* utiliser un **tableau de pointeurs de fonctions** pour associer opérateurs et fonctions
* trier des tableaux de mots avec `my_sort_word_array` et `my_advanced_sort_word_array`
* créer un **do-op avancé** utilisant `my_opp.h` pour associer les opérateurs à des fonctions

---

# 📂 Project Structure

```bash
CPool_Day10_$ACADEMICYEAR/
├── include/
│   ├── my.h           # ta libmy.a
│   ├── my_opp.h       # définitions opérateurs et prototypes
│   └── my_struct.h    # ta struct operator (optionnel)
│
├── lib/
│   └── my/
│       └── libmy.a    # bibliothèque statique utilisée
│
├── my_advanced_do_op/
│   ├── Makefile       # rules: all, clean, fclean, re
│   ├── main.c         # gestion de argc/argv et boucle sur les opérateurs
│   └── operations.c   # fonctions my_add, my_sub, my_mul, my_div, my_mod
│
├── my_sort_word_array.c           # Task 03
├── my_advanced_sort_word_array.c  # Task 04
└── do-op/                        # Task 02
    ├── Makefile
    ├── main.c
    └── operations.c
```

---

# ⚙️ Compilation & Delivery

### Compilation du projet :

Toutes les sources doivent compiler correctement avec `libmy.a` :

```bash
cd my_advanced_do_op
cc *.c -L../lib/my -lmy -I../include -o my_advanced_do-op
```

**Règles importantes :**

* ✔️ Ne pas inclure `main.c` dans la livraison pour les fonctions réutilisables
* ✔️ Tous les fichiers `.c` doivent compiler sans erreurs
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

## Task 01 — Makefile

* Crée un Makefile pour compiler **libmy**

* Actions à inclure :

  * copier la bibliothèque dans `lib/`
  * copier `my.h` dans `include/`
  * implémenter la règle `clean`

* **Delivery:** `lib/my/Makefile`

---

## Task 02 — do-op

```bash
./do-op value1 operator value2
```

* Calcule une opération avec deux entiers et un opérateur (`+ - * / %`)

* L’opérateur correspond à une fonction via un **tableau de pointeurs de fonctions**

* Gestion des erreurs :

  * Expression incorrecte → affiche `0`
  * Nombre d’arguments incorrect → rien n’est affiché
  * Division/modulo par zéro → message d’erreur spécifique

* **Delivery:** `do-op/`

---

## Task 03 — my_sort_word_array

```c
int my_sort_word_array(char **tab);
```

* Trie un tableau de mots (`my_str_to_word_array`) par ordre ASCII
* Tri réalisé en **changeant les pointeurs du tableau**
* Retourne toujours `0`
* **Delivery:** `my_sort_word_array.c`

---

## Task 04 — my_advanced_sort_word_array

```c
int my_advanced_sort_word_array(char **tab,
        int (*cmp)(char const *, char const *));
```

* Trie les mots selon le résultat d’une **fonction de comparaison passée en paramètre**
* Tri réalisé en **changeant les pointeurs du tableau**
* Exemple : passer `my_strcmp` pour obtenir le même résultat que `my_sort_word_array`
* Retourne toujours `0`
* **Delivery:** `my_advanced_sort_word_array.c`

---

## Task 05 — my_advanced_do-op

* Programme similaire à `do-op` mais **utilise `my_opp.h`**
* Doit créer les fonctions :

```c
my_add, my_sub, my_mul, my_div, my_mod, my_usage
```

* `my_usage` affiche les opérateurs supportés

* Les opérateurs non définis dans `my_opp.h` affichent une erreur

* Gestion des erreurs :

  * Expression incorrecte → `0`
  * Division/modulo par zéro → message d’erreur
  * Nombre d’arguments incorrect → rien affiché

* **Delivery:** `my_advanced_do_op/`

