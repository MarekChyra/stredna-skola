#include <stdio.h>
#include <stdlib.h>

/* napiste program ktory z klavesnice nacita polomer kruhu a vypocita a vypise jeho obsah a obvod pi=3.14158, 
vysledok 2 desatine cisla s jednotkou */

int main() 
{
	const float pi=3.14158;
	float r;
	
	printf("Zadaj polomer kruhu (v cm): ");
	scanf("%f",&r);
	
	printf("Obvod kruhu s polomerom %f cm je %.2f cm\n", r, 2*pi*r);
	printf("Obsah kruhu s polomer %f cm je %.2f cm", r, pi*r*r);
	
	return 0;
}
