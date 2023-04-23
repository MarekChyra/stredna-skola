#include <stdio.h>
#include <stdlib.h>

/* vypocet objemu a povrchu kvadra */

int main() 
{
	float a,b,c;
	float V,S;
	
	printf("VYPOCET OBJEMU A POVRCHU KVADRA");
	printf("\n\nzadaj stranu a kvadra (v cm): ");
	scanf("%f",&a);
	printf("\nzadaj stranu b kvadra (v cm): ");
	scanf("%f",&b);
	printf("\nzadaj stranu c kvadra (v cm): ");
	scanf("%f",&c);
	
	V = a*b*c;
	S = 2*(a*b+a*c+b*c);
	
	printf("\nobjem kvadra je: %.2f cm^3", V);
	printf("\npovrch kvadra je: %.2f cm^2", S);
	
	return 0;
}
