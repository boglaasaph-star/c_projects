#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "PATIENT_H"
Patient *creerPatient(int numero,char*nom,int urgence,char*motif){
	Patient *nouveau=(Patient*)malloc(sizeof(Patient*));
	strcpy(nouveau->nom=nom);
	nouveau->numero=numero;
	nouveau->urgence=urgence;
	strcpy(nouveau->motif=motif);
	return nouveau;
}
Patient*recevoirPatient(Patient*tete,int numero,char*nom,int urgence,char*motif){
	Patient*p=creerPatient(numero,motif,nom,urgence);
	if(tete==NULL){
		return p;
	}
	if(p->urgence==1){
		p->suivant=tete;
		tete=p;
	}else{
		Patient*courant=tete;
		while(courant->suivant!=NULL){
			courant=courant->suivant;
		}
		courant->suivant=p;
	}
	return tete;
}

Patient*appelerPatient(Patient*tete){
	Patient*p=tete;
	tete=tete->suivant;
	free(p);
	return tete;
}

Patient*appelerPatient(Patient *tete){
	Patient *p=tete;
	tete=tete->suivant;
	free(p);
	return tete;
}

void afficheeFileDattente(Patient*tete){
	Patient*p=tete;
	if(p!=NULL){
		while(p!=NULL){
			printf("%d\n,%s\n,%d\n,%s\n",p->numero,p->nom,p->urgence,p->motif);
			p=p->suivant;
		}
	}
}

int nombrePatientsEnAttente(Patient*tete){
	int n=0;
	Patient *p=tete;
	while(p!=NULL){
		n++;
		p=p->suivant;
	}
	return n;
}

Patient* rechercherPatient(Patient*tete,int numero){
	Patient*p=tete;
	if(tete!=NULL){
		while(p!=NULL){
			if(p->numero==numero){
				return p;
			}
			p=
			}
		}
	}
}
