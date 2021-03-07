#include<stdio.h>
#define N 20
int main() {
	int tab[N] = {1, 2, 44, -6, -11, 0, 0, 32, 88, 100, 1, 2, 44, -6, -11, 0, 0, 32, 88, 100};
	
	int i;
	int nbr_a_chercher;
	int trouve  = 0;
	printf("entrez le nombre à chercher dans le tableau\n");
	scanf("%d", &nbr_a_chercher);
	
	//on peut aussi utiliser la boucle while à la place de for
	//à faire en exercice
	
	for (i = 0; i < N; i++){
		if (tab[i] == nbr_a_chercher) {
			trouve = 1;
			break;
		}
	}
	
	if (trouve) printf("j'ai trouvé le nombre %d dans le tableau\n", nbr_a_chercher);
	else printf("je n'ai pas trouvé votre nombre ! \n");
	
	return 0;
}	
