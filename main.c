#include <stdio.h>
#include <stdlib.h>
#include "piles.h"

int main() {
    Pile ma_pile;
    char valeur;

    // 1. Initialiser la pile
    init(ma_pile);

    // 2. Empiler les caractères '(', '[', '{'
    printf("Empilage...\n");
    empiler(ma_pile, '(');
    empiler(ma_pile, '[');
    empiler(ma_pile, '{');

    // 3. Dépiler un à un en affichant chaque valeur
    printf("Dépilage :\n");
    while (!estVide(ma_pile)) {
        depiler(ma_pile);
        printf("  -> %c\n", valeur);
    }

    // 4. Vérifier que la pile est vide à la fin
    if (estVide(ma_pile)) {
        printf("Succès : la pile est bien vide.\n");
    } else {
        printf("Erreur : la pile n'est pas vide.\n");
    }

    return 0;
}
