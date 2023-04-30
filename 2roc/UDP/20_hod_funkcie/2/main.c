#include <stdio.h>
#include <stdlib.h>

/* vypise pocet rieseni kvr */

float diskriminant(float a, float b, float c);
void pocet_rieseni_kvr(float diskriminant);

int main(int argc, char *argv[]) {
	float a, b, c;
	
	printf("zadaj koeficienty kvadratickej rovnice");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	
	
	pocet_rieseni_kvr(diskriminant(a, b, c));
	
	return 0;
}

float diskriminant(float a, float b, float c) {
	float diskriminant;
	
	diskriminant = (b * b) - (4 * a * c);
	
	return diskriminant;
}

void pocet_rieseni_kvr(float diskriminant) {
	int riesenia;
	
	if (diskriminant>0) {
		riesenia = 2;
	}
	else if(diskriminant==0) {
		riesenia = 1;
	}
	else {
		riesenia = 0;
	}
	
	printf("Pocet rieseni je: %d", riesenia);
}