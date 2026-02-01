# 💻 CPool Day 03 — Fonctions d'affichage & combinaisons

✨ **Projet C — Manipulation de chiffres et de nombres en C** ✨

Ce dépôt contient des fonctions en C pour afficher des chiffres, des nombres et générer des combinaisons numériques.
Chaque fonction respecte des contraintes précises et permet de travailler sur l’ordre, les conditions et les combinaisons de manière ascendante.

----

## 📂 Structure du projet
```
CPool_Day03_$ACADEMICYEAR/
│
├─ my_print_digits.c      # Affiche tous les chiffres (0-9)
├─ my_isneg.c             # Affiche 'N' si négatif, 'P' si positif ou nul
├─ my_print_comb.c        # Combinaisons de 3 chiffres différents
├─ my_print_comb2.c       # Combinaisons de deux nombres à 2 chiffres
├─ my_put_nbr.c           # Affiche n’importe quel entier
├─ my_print_combn.c       # Combinaisons de n chiffres différents
│
└─ tests/
   └─ tests_my_put_nbr.c  # Tests pour valider toutes les fonctions
```

## 📝 Détails des fonctions

---

## 📝 Détails des fonctions

### `my_print_digits`
- **Prototype :** `int my_print_digits(void);`  
- **Description :** Affiche tous les chiffres de `0` à `9` sur une seule ligne.  
- **Exemple :**

0 1 2 3 4 5 6 7 8 9


### `my_isneg`
- **Prototype :** `int my_isneg(int n);`  
- **Description :** Affiche `N` si le nombre est négatif, `P` si positif ou nul.  
- **Exemple :**

my_isneg(-5) -> N
my_isneg(0)  -> P
my_isneg(42) -> P


### `my_print_comb`
- **Prototype :** `int my_print_comb(void);`  
- **Description :** Affiche toutes les combinaisons de 3 chiffres différents en ordre croissant.  
- **Exemple :**

012, 013, 014, ..., 789


### `my_print_comb2`
- **Prototype :** `int my_print_comb2(void);`  
- **Description :** Affiche toutes les combinaisons de deux nombres à deux chiffres différents en ordre croissant.  
- **Exemple :**

00 01, 00 02, 00 03, ..., 98 99


### `my_put_nbr`
- **Prototype :** `int my_put_nbr(int nb);`  
- **Description :** Affiche un entier, positif, nul ou négatif.  
- **Exemple :**

my_put_nbr(42)          -> 42
my_put_nbr(0)           -> 0
my_put_nbr(-2147483647) -> -2147483647


### `my_print_combn`
- **Prototype :** `int my_print_combn(int n);`  
- **Description :** Affiche toutes les combinaisons de `n` chiffres différents, en ordre croissant.  
- **Exemple :**

my_print_combn(3) -> 012, 013, ..., 789


---

## ✅ Testing
Tester vos fonctions est essentiel pour garantir leur robustesse.  
- Créez un fichier dans le dossier `tests/` pour valider chaque fonction.  
- Exemple pour `my_isneg` :
```c
#include "my_isneg.c"

int main() {
    my_isneg(0);
    my_isneg(21);
    my_isneg(-21);
    return 0;
}
```
Couvrir toutes les situations possibles : positif, négatif, zéro et limites (INT_MAX, INT_MIN).