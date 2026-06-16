#ifndef PILES_H
#define PILES_H
#define TAILLE_MAX 100
typedef struct{
	char elements[TAILLE_MAX];
	int sommet;
}Pile;

void init(Pile P);
int estVide(Pile P);
int estPleine(Pile P);
void empiler(Pile P,char x);
char depiler(Pile P);
int sommet(Pile P,int indice);
#endif
