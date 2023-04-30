#include <stdio.h>
#include <stdlib.h>

/* Vytvorte program, ktorý:

    načíta do poľa z klávesnice 12 celých čísel
    na obrazovku vypíše všetky čísla v opačnom poradí, ako ste ich zadávali
    nájde najmenšie číslo a vypíše ho aj s indexom poľa, napr. A[10]=2 
*/

int main(int argc, char *argv[]) {
	int pole[12];
	int najmensie;
	int index;
	int i;
	
	printf("zadavajte 12 celych cisel: \n");
	scanf("%d",&pole[0]);
	
	najmensie = pole[0];
	index = 0;
	
	for(i=1;i<12;i++) {
		scanf("%d",&pole[i]);
		
		if(pole[i]<pole[i-1]) {
			najmensie = pole[i];
			index = i;
		}
	}
	
	printf("\n");
	
	for(i=11;i>=0;i--) {
		printf("%d ",pole[i]);
	}
	
	printf("\n\npole[%d] = %d",index,najmensie);
	
	return 0;
}