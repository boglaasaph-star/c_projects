#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool palindrome(const char *chaine){
	int debut=0;
	int fin=strlen(chaine)-1;
	while(debut<fin){
		if(chaine[debut]!=chaine[fin]){
		
		return false; }
		debut++;
		fin--;
		}
		return true;
	}
int main(){
	char chaine1[100];
	printf("entrez une chaine de caractere\n");
	scanf("%s",chaine1);
	
	if(palindrome(chaine1)){
		printf("%s est un palindrome",chaine1);
		
	} else{
		printf("%s n'est pas un palindrome",chaine1);
	}
	return 0;
}
