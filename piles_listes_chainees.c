#include <stdio.h>
#include <stdlib.h>
#include "piles_listes_chainees.h"
void init(Pile *p){
	*p=NULL;
}

int estVide(Pile *p){
	return *p==NULL?1:0;
}
void empiler(Pile *p,char val){
	Noeud *nouveau=(Noeud*)malloc(sizeof(Noeud));
	nouveau->valeur=val;
	nouveau->suivant=*p;
	*p=nouveau;
	
}

char depiler(Pile *p){
	Noeud *aSupprimer=*p;
	char val= aSupprimer->valeur;
	*p=(*p)->suivant;
	free(aSupprimer);
	return val;
}

char sommet(Pile *p){
	if(estVide(p)) return'\0';
	return(*p)->valeur;//la valeur du premier élément
}

void afficher(Pile *p){
	
	if(estVide(p)){
		printf("Pile vide\n");
	}
	printf("Pile(sommet ->base):");
	Noeud *courant=*p;//on part du sommet
	while(courant!=NULL){
		printf("%c",courant->valeur);
		courant=courant->suivant;
	}
	printf("\n");
}
