#include <stdio.h>
int main () {
	int nbr;
	
	const float p10c = 0.9; // prix 10 copies
	const float p20c = 0.8; // 20 copies
	const float pc = 0.6;		// > 20 copies
	
	int a = 0;
	int b = 0;
	int c = 0;
	
	float resultat;
	
	printf("entrez le nombre de photocopies à réaliser");
	
	scanf("%d", &nbr);
	
	if (nbr >= 10) {
		a = 10;
		nbr = nbr - 10;
		if (nbr >=20) {
			b = 20;
			nbr = nbr -20;
			c = nbr;
		} else b = nbr;
	} else a = nbr;
	
	resultat = a* p10c + b * p20c + c * pc;
	
	printf("le resultat total = %f", resultat);
	return 0;
}
