#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* vstup polomer gule	vystup objem a povrch gule */

int main()
{
	float r;
	const float pi=3.14;
	
	printf("zadaj polomer gule: ");
	scanf("%f",&r);
	printf("objem gule je %.2f a povrch gule je %.2f", (4.0/3)*pi*pow(r,3), 4*pi*r*r);
	
	return 0;
}
