#include <stdio.h>
#include <math.h>

estpair(int x){
	if(x%2==0){
		printf("%d est un nombre pair");
		
		}else{
			printf("%d n'est pas un nombre pair");
		}
		
	}


estpremier(int a){
	if(a<2){
		return false;
		
		}else if(a>=2){
			for(int i=0;i<=sqrt(a);i++){
				if(a%2==0){
					return false;
				
					}	else{
						return true;
					}
				}
			}
		}
	


carre_nombre(float b){
	float carre= pow(b,2);
	return carre;
}
