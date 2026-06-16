#ifndef PILES_LISTES_CHAINEES_H
#define	PILES_LISTES_CHAINEES_H
#define TAILLEMAX 1000
typedef struct Noeud{
	char valeur;
	struct Noeud *suivant;
}Noeud;

typedef Noeud *Pile;
void init(Pile *p);
int estVide(Pile *p);
void empiler(Pile *p,char val);
char depiler(Pile * p);
char sommet(Pile *p);
void afficher(Pile *p);

#endif
