#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Vytvorte program, ktor�:

    vytvorte 30 prvkov� pole naplnen� n�hodn�mi cel�mi ��slami z intervalu <0;9>
    obsah po�a vyp�te na obrazovku (do riadku, s medzerami medzi ��slami)
    Zistite a vyp�te ko�kokr�t sa v poli nach�dza ��slo 4 
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