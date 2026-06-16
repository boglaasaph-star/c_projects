#include <stdio.h>
#include <stdlib.h>
#include"piles_listes_chainees.h"

int main() {
	Pile maPile;
	init(&maPile);
	printf("apres initialisation de la pile\n");
	afficher(&maPile);
	printf("\n------Empilage------\n");
	empiler(&maPile,'(');
	empiler(&maPile,'[');
	empiler(&maPile,'{');
	printf("\n--------Depilage---------\n");
	char x=depiler(&maPile);
	printf("%c\n\n",x);
	char y=depiler(&maPile);
	printf("%c\n\n",y);
	char z=depiler(&maPile);
	printf("%c\n\n",z);
	afficher(&maPile);
	return 0;
}
