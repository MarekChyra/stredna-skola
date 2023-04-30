#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Vytvorte program, ktorý:

    vytvorte 30 prvkové pole naplnené náhodnými celými èíslami z intervalu <0;9>
    obsah po¾a vypíšte na obrazovku (do riadku, s medzerami medzi èíslami)
    Zistite a vypíšte ko¾kokrát sa v poli nachádza èíslo 4 
*/

int main(int argc, char *argv[]) {
	int pole[30];
	int i;
	int cisla=0;
	
	srand(time(0));
	
	for(i=0;i<30;i++) {
		pole[i] = rand()%10;
		if(pole[i]==4) {
			cisla++;
		}
		printf("%d ", pole[i]);
	}
	
	printf("\ncislo 4 sa nachadza %d krat v poli", cisla);
	
	return 0;
}