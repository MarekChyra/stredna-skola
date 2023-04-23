#include <stdio.h>
#include <stdlib.h>

/* nostnost vytahu 500kg zadavanie balikov sa ukonci az po prekroceni nostnosti */

int main(){
	int pocet = 0;
	float balik = 0, hmotnost = 0;
	
	printf("Nostnost vytahu je 500kg\n\n");

	while (hmotnost<=500){
		printf("Zadaj hmotnost baliku: ");
		scanf("%f",&balik);
		pocet += 1;
		hmotnost += balik;
	}
	pocet -= 1;
	hmotnost -= balik;
	printf("pocet nalozenych balikov: %d \ns hmotnostou %.2f kg",pocet,hmotnost);
	
	return 0;
}
