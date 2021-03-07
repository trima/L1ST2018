#include<stdio.h>
int main() {

	int tab[10];
	int i;
	int nbpos = 0;
	int nbneg = 0;
	int nbnul = 0;
	

	printf("entrez 10 nombres entiers au clavier, je vais compter les nombres positifs, négatifs et nuls\n");
	for (i = 0; i< 10; i++){
		scanf("%d", &tab[i]);
	}
	
	for (i = 0; i<10; i++) {
		if(tab[i] > 0) nbpos++;
		else if (tab[i] < 0) nbneg++;
		else nbnul++;
	}
	
	printf("nbr positifs = %d, nbr négatifs = %d, nbr nuls = %d\n", nbpos, nbneg, nbnul);
	
	return 0;
}
