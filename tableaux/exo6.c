#include<stdio.h>
#define N 20
int main() {
	int tab[N];
	int i;
	int min, max;
	int indice_min, indice_max;
	printf("entrez %d nombres entiers pour afficher les indices de leur min et max\n", N);
	for (i = 0; i< N; i++)
		scanf("%d", &tab[i]);
		
	//on suppose le min et le max sont le premier élément
	min = tab[0];
	max = tab[0];
	
	indice_min = 0;
	indice_max = 0;
	
	//on commence donc par le 2 élément du tableau (i=1)
	for (i = 1; i< N; i++){
		if (min > tab[i]) {min = tab[i];indice_min = i;}
		if (max < tab[i]) {max = tab[i];indice_max = i;}
	}
	
	printf("le min et le max des nombres :\n");
	for (i = 0; i< N; i++) printf("%d ", tab[i]);
	
	printf("\nsont %d et %d, aux indices %d et %d\n", min, max, indice_min, indice_max);
	
	return 0;
}
