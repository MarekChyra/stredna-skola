#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int velkost;
	int i, j;
	int pocet = 0;
	
	srand(time(0));
	
	printf("zadaj velkost matice: ");
	scanf("%d", &velkost);
	
	int matica[velkost][velkost];
	
	for (i = 0; i < velkost; i++) {
		for (j = 0; j < velkost; j++) {
			matica[i][j] = (rand() % 5);
			if (matica[i][j] != 0) {
				pocet++;
			}
		}
	}
	
	for (i = 0; i < velkost; i++) {
		for (j = 0; j < velkost; j++) {
			printf("%d ", matica[i][j]);
		}
		printf("\n");
	}
	
	printf("\npocet nenulovych prvkov: %d", pocet);
	
	return 0;
}
