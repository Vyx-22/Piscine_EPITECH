# 💻 CPool Day 12 — File Descriptors

✨ **C Programming Project — File I/O, cat & grep + Unit Tests** ✨

Ce projet a pour objectif de :

* manipuler les **file descriptors (open, read, write, close)**
* reproduire des commandes Unix (**cat** et **grep**)
* gérer les **erreurs système**
* écrire des **tests unitaires avec Criterion**

---

# 📂 Project Structure

```bash
CPool_Day12_$ACADEMICYEAR
│
├── cat/                    # Task 01
│   ├── Makefile
│   └── *.c
│
├── grep/                   # Task 03
│   ├── Makefile
│   └── *.c
│
├── tests/                  # Tests unitaires (Task 02 & 04)
│   └── *.c
│
├── bonus/                  # Bonus (optionnel)
│
└── lib/
    └── my/                 # libmy (si utilisée)
```

---

# ⚙️ Compilation & Delivery

Chaque programme doit avoir son **Makefile** avec :

```bash
make
make clean
make fclean
make re
```

**Règles importantes :**

* ✔️ Aucun fichier inutile (binaires, .o, etc.)
* ✔️ Les erreurs doivent être affichées sur **stderr**
* ✔️ Code de retour :

  * `0` → succès
  * `84` → erreur
* ✔️ Pas de `perror()` autorisé
* ✔️ Respect des fonctions autorisées

---

# 🔹 Allowed System Functions

* `open`
* `read`
* `write`
* `close`
* (+ `malloc`, `free` uniquement pour grep)

---

# 🧩 Tasks Overview

---

## Task 01 — `cat`

📁 **Directory:** `cat/`

* Reproduit la commande Unix `cat`
* Lit et affiche le contenu des fichiers

### Contraintes :

* Supporte plusieurs fichiers
* Fonctionne **sans argument**
* Buffer fixe (~30 ko)
* ❌ `read` de taille 1 interdit
* ❌ `malloc` interdit

### Exemple :

```bash
./cat file.txt
./cat file1.txt file2.txt
```

**Delivery:** `cat/`

---

## Task 02 — Tests `cat`

📁 **Directory:** `tests/`

* Tests unitaires avec **Criterion**
* Tester :

  * lecture de fichier
  * erreurs (fichier inexistant, permission…)
  * fonctions internes

### Compilation des tests :

Ajouter dans le Makefile :

```bash
make tests_run
```

**Delivery:** `tests/`

---

## Task 03 — `grep`

📁 **Directory:** `grep/`

* Reproduit la commande `grep`
* Recherche une chaîne dans un ou plusieurs fichiers

### Contraintes :

* Pas de regex → simple matching
* Gestion des erreurs :

  * fichier inexistant
  * permission refusée
* ❌ `perror()` interdit
* ✔️ `malloc` autorisé
* ❌ `read` de taille 1 interdit

### Exemple :

```bash
./grep hello file.txt
./grep "text" file1 file2
```

---

## Task 04 — Tests `grep`

📁 **Directory:** `tests/`

* Tests unitaires avec **Criterion**
* Tester :

  * matching correct
  * cas sans résultat
  * erreurs fichiers

---
