# 💻 CPool Day 05 — Récursivité 

✨ Projet C — Approfondissement de la récursivité et implémentation de fonctions mathématiques ✨

Ce dépôt contient différentes fonctions en C utilisant la **récursivité** et des algorithmes mathématiques. Chaque fonction respecte des contraintes strictes liées à la gestion des cas d’erreur, des limites numériques et de la précision.

---

## 📂 Structure du projet

```
CPool_Day05_$ACADEMICYEAR/
│
├─ my_compute_factorial_it.c        # Factorielle — version itérative
├─ my_compute_factorial_rec.c       # Factorielle — version récursive
├─ my_compute_power_it.c            # Puissance — version itérative
├─ my_compute_power_rec.c           # Puissance — version récursive
├─ my_compute_square_root.c         # Racine carrée entière
├─ my_is_prime.c                    # Test de primalité
├─ my_find_prime_sup.c              # Premier supérieur ou égal
└─ count_valid_queens_placements.c  # Problème des n-reines (récursif)
```

---

## 📝 Détails des fonctions

---

### **Task 01 — my_compute_factorial_it**

* **Prototype** : `int my_compute_factorial_it(int nb);`
* **Description** : Calcule la factorielle de `nb` de manière **itérative**.
* **Règles** :

  * `0! = 1`
  * Si `nb < 0`, la fonction retourne `0`.
* **Exemple** :

```c
my_compute_factorial_it(5); // Retourne 120
```

---

### **Task 02 — my_compute_factorial_rec**

* **Prototype** : `int my_compute_factorial_rec(int nb);`
* **Description** : Calcule la factorielle de `nb` en **récursif**.
* **Règles** :

  * Retourne `1` si `nb == 0`
  * Retourne `0` si `nb < 0`
* **Exemple** :

```c
my_compute_factorial_rec(4); // Retourne 24
```

---

### **Task 03 — my_compute_power_it**

* **Prototype** : `int my_compute_power_it(int nb, int p);`
* **Description** : Calcule `nb^p` de manière **itérative**.
* **Règles** :

  * `nb^0 = 1`
  * Si `p < 0`, la fonction retourne `0`.
* **Exemple** :

```c
my_compute_power_it(2, 3); // Retourne 8
```

---

### **Task 04 — my_compute_power_rec**

* **Prototype** : `int my_compute_power_rec(int nb, int p);`
* **Description** : Calcule `nb^p` en **récursif**.
* **Règles** :

  * `nb^0 = 1`
  * Si `p < 0`, retourne `0`
* **Exemple** :

```c
my_compute_power_rec(3, 3); // Retourne 27
```

---

### **Task 05 — my_compute_square_root**

* **Prototype** : `int my_compute_square_root(int nb);`
* **Description** : Retourne la **racine carrée entière** de `nb` si elle existe.
* **Règles** :

  * Si la racine n’est pas entière, retourne `0`.
* **Exemple** :

```c
my_compute_square_root(25); // Retourne 5
my_compute_square_root(10); // Retourne 0
```

---

### **Task 06 — my_is_prime**

* **Prototype** : `int my_is_prime(int nb);`
* **Description** : Vérifie si un nombre est **premier**.
* **Règles** :

  * Retourne `1` si premier
  * Retourne `0` sinon
  * `0` et `1` ne sont pas premiers
* **Exemple** :

```c
my_is_prime(7); // Retourne 1
my_is_prime(8); // Retourne 0
```

---

### **Task 07 — my_find_prime_sup**

* **Prototype** : `int my_find_prime_sup(int nb);`
* **Description** : Retourne le **plus petit nombre premier ≥ nb**.
* **Exemple** :

```c
my_find_prime_sup(14); // Retourne 17
```

---

### **Task 08 — count_valid_queens_placements**

* **Prototype** : `int count_valid_queens_placements(int n);`
* **Description** : Calcule le nombre de façons de placer **n reines sur un échiquier n×n** sans qu'elles ne se menacent.
* **Méthode** : Algorithme **récursif** avec backtracking.
* **Exemples (résultats attendus)** :

```
n = 1  → 1  
n = 2  → 0  
n = 3  → 0  
n = 4  → 2  
n = 5  → 10  
```

---

Damn it, this is recursion day! 🌀🔥

