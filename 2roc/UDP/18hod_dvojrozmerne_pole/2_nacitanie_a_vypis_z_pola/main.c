#include <stdio.h>
#include <stdlib.h>

/* od uzivatela nacitajte pocet riadkov a stlpcov matice */

int main() {
	int i,j;
	int riadky,stlpce, max, min, sucet;
	float priemer;
	
	// nacita kolko riadkov chces
	printf("zadaj pocet riadkov: ");
	scanf("%d",&riadky);
	
	// nacita kolko stlpcov chces
	printf("zadaj pocet stlpcov: ");
	scanf("%d",&stlpce);
	
	// deklaruje pole matica
	int matica[riadky][stlpce];
	
	printf("zadavaj cisla: \n");
	
	for (i=0;i<riadky;i++) {
		printf("\n%d. riadok: \n",i+1); // vypise do akeho stlpca mas zadavat cisla
		for (j=0;j<stlpce;j++) {
			printf("\t%d. stlpec: ",j+1); // vypise do akeho riadku mas zadavat cisla
			scanf("%d",&matica[i][j]); // nacita hodnoty
		}
	}
	
	// vypisovanie hodnot
	printf("\n-");
	
	for (i=0;i<stlpce;i++) {
		printf("----");
	}
	
	printf("\n");
	
	for (i=0;i<riadky;i++) {
		printf("|");
		for (j=0;j<stlpce;j++) {
			printf(" %d |",matica[i][j]);
		}
		printf("\n");
	}
	
	printf("-");
	
	for (i=0;i<stlpce;i++) {
		printf("----");
	}
	
	// zistuje max a min a sucet
	
	min = matica[0][0]; // nacita min
	max = matica[0][0]; // nacita max
	
	for (i=0;i<riadky;i++) {
		for (j=0;j<stlpce;j++) {
			if (matica[i][j]>max) { // porovnava max
				max = matica[i][j]; // nacita max
			}
			if (matica[i][j]<min) { // porovnava min
				min = matica[i][j]; // nacita min
			}
			sucet = sucet + matica[i][j]; // pocita sucet
		}
	}
	
	priemer = sucet / (stlpce*riadky); // pocita priemer
	
	printf("\n\n");
	printf("max: %d\n",max);
	printf("min: %d\n",min);
	printf("sucet: %d\n",sucet);
	printf("priemer: %f\n",priemer);
	
	return 0;
}