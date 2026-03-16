# 💻 CPool Day 06 — Pointers are back & String manipulation

✨ Projet C — Manipulation de chaînes de caractères, pointeurs et tests unitaires ✨

Ce projet consiste à **reproduire plusieurs fonctions de la bibliothèque `string.h`** en C, sans utiliser les fonctions de la libc.
Chaque fonction est accompagnée de **tests unitaires utilisant le framework Criterion**.

L’objectif est de travailler :

* la manipulation des **pointeurs**
* la gestion des **chaînes de caractères**
* la reproduction de fonctions **libC**
* la création de **tests unitaires**

---

## 📂 Structure du projet

Le projet est organisé en **deux parties principales** :

* les **fonctions implémentées**
* les **tests unitaires**

```
CPool_Day06_$ACADEMICYEAR/
│
├─ my_strcpy.c
├─ my_strncpy.c
├─ my_revstr.c
├─ my_strstr.c
├─ my_strcmp.c
├─ my_strncmp.c
├─ my_strupcase.c
├─ my_strlowcase.c
├─ my_strcapitalize.c
├─ my_str_isalpha.c
├─ my_str_isnum.c
├─ my_str_islower.c
├─ my_str_isupper.c
├─ my_str_isprintable.c
├─ my_putnbr_base.c
├─ my_getnbr_base.c
├─ my_showstr.c
└─ my_showmem.c
│
└─ tests/
   ├─ test_my_strcpy.c
   ├─ test_my_strncpy.c
   ├─ test_my_revstr.c
   ├─ test_my_strstr.c
   ├─ test_my_strcmp.c
   ├─ test_my_strncmp.c
   ├─ test_my_strupcase.c
   ├─ test_my_strlowcase.c
   ├─ test_my_strcapitalize.c
   ├─ test_my_str_isalpha.c
   ├─ test_my_str_isnum.c
   ├─ test_my_str_islower.c
   ├─ test_my_str_isupper.c
   └─ test_my_str_isprintable.c
```

---

## 📝 Détails des fonctions

---

### Task 01 — my_strcpy

**Prototype**

```c
char *my_strcpy(char *dest, char const *src);
```

**Description**

Copie une chaîne `src` dans `dest`.

La mémoire de `dest` est supposée **suffisante pour contenir la copie**.

**Retour**

La fonction retourne `dest`.

**Exemple**

```c
char dest[6];

my_strcpy(dest, "Hello");
// dest contient "Hello"
```

---

### Task 02 — my_strncpy

**Prototype**

```c
char *my_strncpy(char *dest, char const *src, int n);
```

**Description**

Copie **n caractères** de `src` vers `dest`.

**Règles**

* Si `n` > longueur de `src`, compléter avec `'\0'`
* Si `n` < longueur de `src`, **ne pas ajouter `'\0'`**

---

### Task 03 — my_revstr

**Prototype**

```c
char *my_revstr(char *str);
```

**Description**

Inverse une chaîne de caractères **en place**.

**Exemple**

```
Hello -> olleH
abcd  -> dcba
```

---

### Task 04 — my_strstr

**Prototype**

```c
char *my_strstr(char *str, char const *to_find);
```

**Description**

Reproduit le comportement de **`strstr`**.

Retourne un pointeur vers la **première occurrence** de `to_find` dans `str`.

---

### Task 05 — my_strcmp

**Prototype**

```c
int my_strcmp(char const *s1, char const *s2);
```

**Description**

Compare deux chaînes comme la fonction **`strcmp`**.

**Retour**

* `0` → chaînes égales
* `<0` → `s1 < s2`
* `>0` → `s1 > s2`

---

### Task 06 — my_strncmp

**Prototype**

```c
int my_strncmp(char const *s1, char const *s2, int n);
```

**Description**

Compare **au maximum n caractères** de deux chaînes.

Même comportement que `strncmp`.

---

### Task 07 — my_strupcase

**Prototype**

```c
char *my_strupcase(char *str);
```

**Description**

Convertit **toutes les lettres en majuscules**.

---

### Task 08 — my_strlowcase

**Prototype**

```c
char *my_strlowcase(char *str);
```

**Description**

Convertit **toutes les lettres en minuscules**.

---

### Task 09 — my_strcapitalize

**Prototype**

```c
char *my_strcapitalize(char *str);
```

**Description**

Met la **première lettre de chaque mot en majuscule**.

**Exemple**

```
hey, how are you? 42WORds forty-two
↓
Hey, How Are You? 42words Forty-Two
```

---

### Task 10 — my_str_isalpha

**Prototype**

```c
int my_str_isalpha(char const *str);
```

**Description**

Retourne :

* `1` si la chaîne contient **uniquement des lettres**
* `0` sinon

Une chaîne vide retourne **1**.

---

### Task 11 — my_str_isnum

**Prototype**

```c
int my_str_isnum(char const *str);
```

**Description**

Retourne :

* `1` si la chaîne contient **uniquement des chiffres**
* `0` sinon

---

### Task 12 — my_str_islower

**Prototype**

```c
int my_str_islower(char const *str);
```

Retourne **1** si la chaîne contient uniquement **des lettres minuscules**.

---

### Task 13 — my_str_isupper

**Prototype**

```c
int my_str_isupper(char const *str);
```

Retourne **1** si la chaîne contient uniquement **des lettres majuscules**.

---

### Task 14 — my_str_isprintable

**Prototype**

```c
int my_str_isprintable(char const *str);
```

Retourne **1** si la chaîne contient uniquement **des caractères imprimables**.

---

### Task 15 — my_putnbr_base

**Prototype**

```c
int my_putnbr_base(int nbr, char const *base);
```

**Description**

Affiche un nombre entier dans **une base donnée**.

Exemples de bases :

```
"01"                -> binaire
"0123456789"        -> décimal
"0123456789ABCDEF"  -> hexadécimal
```

---

### Task 16 — my_getnbr_base

**Prototype**

```c
int my_getnbr_base(char const *str, char const *base);
```

**Description**

Convertit un nombre écrit dans une **base donnée** vers un **entier décimal**.

Gère :

* les nombres négatifs
* plusieurs signes `+` ou `-`

---

### Task 17 — my_showstr

**Prototype**

```c
int my_showstr(char const *str);
```

**Description**

Affiche une chaîne.

Les caractères **non imprimables** sont affichés **en hexadécimal précédé d’un `\`**.

**Exemple**

```
I like \n ponies!
↓
I like \0a ponies!
```

---

### Task 18 — my_showmem

**Prototype**

```c
int my_showmem(char const *str, int size);
```

**Description**

Affiche un **dump mémoire** :

Chaque ligne contient :

1️⃣ l’adresse mémoire
2️⃣ le contenu en **hexadécimal**
3️⃣ le contenu en **caractères lisibles**

Les caractères non imprimables sont remplacés par `.`

---

## 🧪 Tests unitaires

Les tests sont écrits avec le framework **Criterion**.

Ils permettent de vérifier que les fonctions reproduisent correctement le comportement des fonctions de la **libC**.

Exemple :

```c
Test(my_strcpy, copy_string)
{
    char dest[6] = {0};

    my_strcpy(dest, "Hello");

    cr_assert_str_eq(dest, "Hello");
}
```
