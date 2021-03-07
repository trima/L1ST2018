#include<stdio.h>
#define N 20
int main() {
	int tab[N] = {1, 2, 44, -6, -11, 0, 0, 32, 88, 100, 1, 2, 44, -6, -11, 0, 0, 32, 88, 100};
	
	int i;
	int nbr_a_chercher;
	int nbr_occurrences  = 0;
	
	printf("entrez le nombre à chercher dans le tableau\n");
	scanf("%d", &nbr_a_chercher);
	
	for (i = 0; i< N; i++){
		if (tab[i] == nbr_a_chercher) {
			nbr_occurrences++;
		}
	}
	
	if (nbr_occurrences > 0) 
	printf("j'ai trouvé le nombre %d dans le tableau %d fois\n", nbr_a_chercher, nbr_occurrences);
	else printf("je n'ai pas trouvé votre nombre ! \n");
	
	return 0;
}
	
