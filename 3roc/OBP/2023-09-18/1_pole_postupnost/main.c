#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, velkost;
	
	printf("zadaj velkost fibonacciho pola: ");
	scanf("%d", &velkost);
	
	int pole[velkost];
	
	for (i = 0; i < velkost; i++) {
		if (i < 2){
			pole[i] = 1;
		} else
		pole[i] = pole[i-1] + pole[i-2];
	}
	
	printf("cleny fibonacciho pola: \n");
	
	for (i = 0; i < velkost; i++) {
		printf("%d ", pole[i]);
	}
	
	return 0;
}
