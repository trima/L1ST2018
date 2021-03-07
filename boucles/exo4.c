#include <stdio.h>
int main() {
	int nbr;
	
	printf("entrez un nombre au clavier\n");
	
	do{
		scanf("%d", &nbr);
		if (nbr < 10) printf("plus grand !\n");
		else if (nbr > 20) printf("plus petit !\n");	
	}while ((nbr <10) || (nbr> 20));
	
	printf("\n Bien joué ! Votre nombre est %d", nbr);

}
