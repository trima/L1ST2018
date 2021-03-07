#include<stdio.h>
#define N 9
int main() {
	float tab[N];
	int i;
	float moyenne;
	
	printf("entrez %d notes pour calculer leur moyenne\n", N);
	
	for (i = 0; i< N; i++){
		scanf("%f", &tab[i]);
	}
	
	for (i = 0; i< N; i++){
		moyenne = moyenne + tab[i];
	}
	
	moyenne  = moyenne / N;
	
	printf("la moyenne est %.2f \n", moyenne);
	
	return 0;
}
