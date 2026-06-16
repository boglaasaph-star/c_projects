#include <stdio.h>
#include <string.h>
struct article{
	char nom[15];
	int num_serie;
	float prix;
	char date_peremption[9];
};

 int main(){
	struct article A[5];
	int i;
	for(i=1;i<=5;i++){
		printf("entrez le nom de l'article %d ",i);
		scanf("%s", &A[i].nom);
		printf("entrez le numero de serie %d ",i );
		scanf("%d",&A[i].num_serie);
		printf("entrez le prix de l'article %d ",i );
		scanf("%f", &A[i].prix);
		printf("entrez la date de peremption de l'article %d",i);
		scanf("%s", &A[i].date_peremption);		
		}
		
		return 0;
	}
	




