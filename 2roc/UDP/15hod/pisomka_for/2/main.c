#include <stdio.h>
#include <stdlib.h>

/*  */

int main() {
	int pocet,i,cislo,pocet_neparne=0;
	
	printf("kolko cisel chces zadavat?\n");
	scanf("%d",&pocet);
	
	printf("zadavaj cele cisla\n");
	
	for (i=1;i<=pocet;i++) {
		scanf("%d",&cislo);
		if (cislo%2==1) {
			pocet_neparne++;
		}
	}
	printf("zadal si %d neparnych cisel",pocet_neparne);
	return 0;
}