#include <stdio.h>
#include <stdlib.h>

/* vypise z pola najvacsie cislo + jeho index */

int main(int argc, char *argv[]) {
	int vektor[7]={5,-4,68,0,12,-214,45}, i,max,pozicia;
	
	max = vektor[0];
	
	for (i=1;i<7;i++) {
		if (max<vektor[i]) {
			max = vektor[i];
			pozicia = i;
		}
	}
	
	printf("najvecsie cislo je: %d s poziciou %d",max,pozicia);
	
	return 0;
}
