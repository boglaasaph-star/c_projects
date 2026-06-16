#ifndef PATIENT_H
#define PATIENT_H
typedef struct{
	int numero;
	char nom[50];
	int urgence;
	char motif[80];
	struct Patient *suivant;
}Patient;
creer
 Patient* recevoirPatient(Patient* tete, char* nom, int urgence, char*motif);
Patient* appelerPatient(Patient* tete);
void afficherFileDAttente(Patient* tete);
int nombrePatientsEnAttente(Patient* tete);
 Patient* rechercherPatient(Patient* tete, int numero);
 
 #endif
