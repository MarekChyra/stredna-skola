#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int cislo=0,pred=0,pocet=2;
	
	printf("zadaj cislo: ");
	scanf("%d",&pred);
	printf("zadaj cislo: ");
	scanf("%d",&cislo);
		
	{
		pred = cislo;
		printf("zadaj cislo: ");
		scanf("%d",&cislo);
		pocet += 1;
	}
	printf("zadal si dve rovnake po sebe iduce cisla\npocet zadanych cisel: %d",pocet);
	
	return 0;
}
