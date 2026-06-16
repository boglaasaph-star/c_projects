#include<stdio.h>
#include<stdlib.h>
#include "piles.h"
//pour les piles par tableau
void init(Pile P){
	P.sommet=-1;
}
int estVide(Pile P){
	if(P.sommet==-1){
		return 1;
	}else{
	return 0;
	}
}

int estPleine(Pile P){
	return P.sommet==TAILLE_MAX - 1 ?1:0;
}
void empiler(Pile P,char x){
	if(estPleine(P)){
		printf("la pile est déja pleine");
	}else{
		P.sommet++;
		P.elements[P.sommet]=x;
	}
}

char depiler(Pile P){
	if(estVide(P)){
		printf("impossible de depiler car la pile est vide");
	}else{
		char x=P.elements[P.sommet];
		P.sommet--;
		return x;
	}
}

/*int sommet(Pile P,int indice){
	if(indice==0){
		return -1;
	}else{
		return P.elements[indice-1];
	}
	
}




