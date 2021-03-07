#include <stdio.h>

int main(){
	int nbr;
	
	do {
		printf("écrire un nombre au clavier entre 1 et 3");
		scanf("%d", &nbr);
	} while ((nbr< 1) || (nbr > 3));
	
	printf("vous avez entré le nombre %d", nbr);
}
