#include <stdio.h>
#include <unistd.h>

int my_showmem(char const *str, int size){
    int j = 0;
    char tab_hexa[] = "0123456789abcdef";

    while (j < size) {
        int debut_ligne = j; // On mémorise le début pour la partie ASCII

        // 1️⃣ AFFICHAGE DE L'ADRESSE (8 chiffres hexa)
        char tableau_adresse[8];
        int temp_addr = j;
        for (int index_tab = 7; index_tab >= 0; index_tab--) {
            if (temp_addr > 0) {
                tableau_adresse[index_tab] = tab_hexa[temp_addr % 16];
                temp_addr /= 16;
            } else {
                tableau_adresse[index_tab] = '0';
            }
        }
        for (int i = 0; i < 8; i++) my_putchar(tableau_adresse[i]);
        my_putchar(':');
        my_putchar(' ');

        // 2️⃣ AFFICHAGE DES 16 OCTETS (Groupés par 2)
        for (int i = 0; i < 16; i += 2) {
            // --- OCTET 1 ---
            if (j < size) {
                int val1 = str[j]; 
                my_putchar(tab_hexa[val1 / 16]);
                my_putchar(tab_hexa[val1 % 16]);
                j++;
            } else {
                my_putchar(' ');
                my_putchar(' ');
            }
            // --- OCTET 2 ---
            if (j < size) {
                int val2 = str[j];
                my_putchar(tab_hexa[val2 / 16]);
                my_putchar(tab_hexa[val2 % 16]);
                j++;
            } else {
                my_putchar(' '); 
                my_putchar(' ');
            }
            my_putchar(' '); // Espace après chaque bloc de 2
        }

        // 3️⃣ AFFICHAGE DE LA COLONNE DES CARACTERES IMPRIMABLES
        for (int k = 0; k < 16; k++) {
            if (debut_ligne + k < size) {
                char c = str[debut_ligne + k];
                if (c >= 32 && c <= 126)
                    my_putchar(c);
                else
                    my_putchar('.');
            }
        }
        my_putchar('\n');
    }

    return 0;
}