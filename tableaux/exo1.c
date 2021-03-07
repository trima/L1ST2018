#include<stdio.h>
int main() {
	int tab[10];
	int i;
	printf("entrez 10 nombres au clavier, je vais trouvez ceux > 10\n");
	for (i = 0; i< 10; i++){
		scanf("%d", &tab[i]);
	}
	
	printf("les nombres > 10 sont :\n");
	for (i = 0; i<10; i++)
	if (tab[i]> 10) printf("%d ", tab[i]);
	
	return 0;
}
