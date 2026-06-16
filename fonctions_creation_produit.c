#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Produit{
	int id;
	char nom[50];
	int quantite;
	float prix;
	struct Produit*suivant;
}Produit;

Produit*Liste=NULL;
//fonction pour creer un prduit
Produit*creer_produit(int id,const char* nom,float prix,int quantite){
	//allocation memoire pour le produit
   Produit* nouveau_produit	=(Produit*)malloc(sizeof(Produit));
   
   if(nouveau_produit==NULL){
   	printf("erreur de l'allocation");
   	return NULL;
   }//Remplissage des données
   nouveau_produit->id =id;
   strncpy(nouveau_produit->nom,nom ,sizeof(nouveau_produit->nom)-1);
   nouveau_produit->nom[sizeof(nouveau_produit->nom)-1]='\0';
   nouveau_produit->prix= prix;
   nouveau_produit->quantite = quantite;
   
   return nouveau_produit;
}
//fonction pour afficher un produit
void afficher_produit(const Produit*p){
	if(p!=NULL){
		printf("ID: %d|Nom: %s| Prix: %.2f | Quantite: %d\n",p->id,p->nom,p->prix,p->quantite);
	}
}



