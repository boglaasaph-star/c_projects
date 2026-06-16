#ifndef FONCTIONS_H
#define FONCTIONS_H
double moyenne(double*tab,int n);
double variance(double*tab,int n);
double ecartType(double*tab,int n);
double mediane(double*tab,int n);
void zscore(double*tab,int n,double*result);
int compterAnomalies(double*tab,int n,double seuilSigma);
#endif
