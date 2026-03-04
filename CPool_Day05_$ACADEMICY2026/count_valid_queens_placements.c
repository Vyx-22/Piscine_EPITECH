#include <stdio.h>
#include <unistd.h>

int count_valid_queens_placements(int n){

    
// Ces variables statiques gardent leurs valeurs entre les appels récursifs
static int plateau[20];
static int compteur = 0;
static int initialisation = 0;

// Initialisation uniquement lors du tout premier appel
if (!initialisation)
{
    for (int i = 0; i < n; i++)
        plateau[i] = -1;    // -1 = aucune reine sur cette ligne
        compteur = 0;
        initialisation = 1;
}

// Cherche la première ligne encore vide
int ligne = 0;
while (ligne < n && plateau[ligne] != -1)
    ligne++;

// Si toutes les lignes sont remplies → solution trouvée
if (ligne == n)
{
    compteur++;
    return compteur;
}

// Essayer chaque colonne pour cette ligne
for (int colonne = 0; colonne < n; colonne++)
{
    int danger = 0;

    // Vérifier si la reine serait en danger
    for (int i = 0; i < ligne; i++)
    {
        if (plateau[i] == colonne) danger = 1;  // même colonne
        if (plateau[i] - i == colonne - ligne) danger = 1; // diagonale ↘
        if (plateau[i] + i == colonne + ligne) danger = 1; // diagonale ↙
    }

    if (!danger)
    {
        // Placer la reine
        plateau[ligne] = colonne;

        // Appeler récursivement
        count_valid_queens_placements(n);

        // Retirer la reine (backtracking)
        plateau[ligne] = -1;
    }
}

return compteur;

}