#include <stdio.h>
#include <stdlib.h>

/* nacita cislo a vypise ciferny sucet */

int main() {
	int cislo, sucet=0, povodne;
	
	printf("zadaj cele cislo\n");
	scanf("%d",&cislo);
	
	povodne = cislo;
	
	while(cislo!=0) {
		sucet = sucet + cislo%10;
		cislo = cislo / 10;
	}
	printf("ciferny sucet cisla %d je %d",povodne,sucet);
	
	return 0;
}
