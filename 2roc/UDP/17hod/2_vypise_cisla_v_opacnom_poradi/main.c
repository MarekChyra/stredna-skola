#include <stdio.h>
#include <stdlib.h>

/* od uzivatela nacitame pocet cisel na spracovanie, dany pocet celych cisel nacitame do pola, cisla vypise v opacnom poradi */

int main(int argc, char *argv[]) {
	int i,pocet;
	
	printf("zadaj kolko cisel chces nacitat\n");
	scanf("%d",&pocet);
	
	int cisla[pocet];
	
	printf("zadavaj cisla: \n");
	
	for (i=0;i<pocet;i++) {
		scanf("%d",&cisla[i]);
	}
	
	printf("nacitane cisla: ");
	
	for (i=pocet-1;i>=0;i--) {
		printf("%d, ",cisla[i]);
	}
	
	return 0;
}
