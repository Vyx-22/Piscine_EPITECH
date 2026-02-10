# 💻 CPool Day 04 — Fonctions sur chaînes & tableaux  

✨ Projet C — Manipulation de chaînes de caractères et de tableaux en C ✨  

Ce dépôt contient des fonctions en C permettant de manipuler des pointeurs, des chaînes et des tableaux. Chaque fonction respecte des contraintes précises et permet de travailler sur la gestion mémoire, l’affichage et les transformations de données.  

## 📂 Structure du projet  
```
CPool_Day04_$ACADEMICYEAR/  
│  
├─ my_swap.c             # Échange le contenu de deux entiers  
├─ my_putstr.c           # Affiche une chaîne de caractères  
├─ my_strlen.c           # Compte la longueur d’une chaîne  
├─ my_evil_str.c         # Inverse une chaîne de caractères  
├─ my_getnbr.c           # Convertit une chaîne en entier    
└── my_sort_int_array.c   # Trie un tableau d’entiers  
```

---

## 📝 Détails des fonctions  

### Task 01 — my_swap  
- **Prototype** : `void my_swap(int *a, int *b);`  
- **Description** : Échange le contenu de deux entiers via leurs adresses.  
- **Exemple** :  
```c
int x = 5, y = 10;
my_swap(&x, &y); // x = 10, y = 5
```

---

### Task 02 — my_putstr  
- **Prototype** : `int my_putstr(char const *str);`  
- **Description** : Affiche une chaîne de caractères caractère par caractère.  
- **Exemple** :  
```c
my_putstr("Hello"); // Affiche Hello
```

---

### Task 03 — my_strlen  
- **Prototype** : `int my_strlen(char const *str);`  
- **Description** : Retourne le nombre de caractères dans une chaîne.  
- **Exemple** :  
```c
my_strlen("Hello"); // Retourne 5
```

---

### Task 04 — my_evil_str  
- **Prototype** : `char *my_evil_str(char *str);`  
- **Description** : Inverse une chaîne de caractères en place.  
- **Exemple** :  
```
"a"     -> "a"
"ab"    -> "ba"
"abc"   -> "cba"
"abcd"  -> "dcba"
"abcde" -> "edcba"
```

⚠️ Attention : tester uniquement avec des chaînes modifiables (`strdup` peut être utilisé).  

---

### Task 05 — my_getnbr  
- **Prototype** : `int my_getnbr(char const *str);`  
- **Description** : Convertit une chaîne en entier, en gérant les signes et les débordements.  
- **Exemples** :  
```
"+−−−+−−++−−−+−−−+−−−+−42" -> -42
"42a43"                    -> 42
"11000000000000000000000042" -> 0 (overflow)
"-1000000000000000000000042" -> 0 (overflow)
```

---

### Task 06 — my_sort_int_array  
- **Prototype** : `void my_sort_int_array(int *array, int size);`  
- **Description** : Trie un tableau d’entiers en ordre croissant.  
- **Exemple** :  
```c
int arr[] = {5, 2, 9, 1};
my_sort_int_array(arr, 4); // arr devient {1, 2, 5, 9}
```

