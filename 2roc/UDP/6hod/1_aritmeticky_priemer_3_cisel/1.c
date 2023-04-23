#include <stdio.h>
#include <stdlib.h>

/* napiste program ktory precita 3 realne cisla a vypise ich aritmeticky priemer na 3 desatine miesta */

int main()
{
	float a,b,c;
	
	printf("zadaj prve realne cislo: ");
	scanf("%f",&a);
	printf("zadaj druhe realne cislo: ");
	scanf("%f",&b);
	printf("zadaj tretie realne cislo: ");
	scanf("%f",&c);
	printf("aritmeticky priemer cisel %f, %f, %f je %.3f", a, b, c, (a+b+c)/3);
	
	return 0;
}
