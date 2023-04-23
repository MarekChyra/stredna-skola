#include <stdio.h>
#include <stdlib.h>

/* program na vstupe nacitava cisla, zadavanie cisel sa ukoncuje stlacenim 0 na zaver vypise sucet, pocet a priemer cisel 
*/

int main() 
{
	float priemer=0;
	int pocet=0,zadane,sucet=0;
	
	printf("zadavaj cisla, ukonci 0\n");
	scanf("%d",&zadane);
	
	while(zadane!=0)
	{
		if (zadane > 5)
		{
			printf("zadal si zlu znamku\n");
		}
		else{
		sucet=zadane+sucet;
		pocet++;
		scanf("%d",&zadane);
		}
	}
	priemer=sucet/pocet;
	printf("sucet cisel je %d\npocet cisel je %d\npriemer cisel je %.2f",sucet,pocet,priemer);
	
	return 0;
}
