#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include"fonctions.h"
double moyenne(double*tab,int n){
	double temp=0;
	int i;
 	for(i=0;i<n;i++){
		temp+=tab[i];
	}
	return temp/n;
}

double variance(double*tab,int n){
	double temp=0;
	int i;
	double moy=moyenne(tab,n);
	for(i=0;i<=n-1;i++){
		temp+=(tab[i]-moy)*(tab[i]-moy);
	}
	return temp/(n-1);
}

double ecartType(double*tab,int n){
	double var=variance(tab,n);
	return sqrt(var);
	
}

double mediane(double*tab,int n){
	
}
