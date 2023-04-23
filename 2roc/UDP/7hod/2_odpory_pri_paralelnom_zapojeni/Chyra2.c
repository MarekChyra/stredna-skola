#include <stdio.h>
#include <stdlib.h>

/* nacita 2 odpory vypise vysledny odpor pri paralelnom zapojeni r=(r1*r2)/(r1+r2) */

int main() 
{
	float R1,R2;
	
	printf("Zadaj hodnotu R1(v ohmoch): ");
	scanf("%f",&R1);
	printf("\nZadaj hodnotu R2(v ohmoch): ");
	scanf("%f",&R2);
	
	printf("Vysledny odpor pri paralelnom zapojeni R1 a R2 je %.2f ohmov", R1, R2, (R1*R2)/(R1+R2));
	
	return 0;
}
