#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float a[3][2];
	float b[3][2];
	float c[3][2];
	int i,j;
	
	printf("zadaj 6 desatinnich cisel: \n");
	for (i = 0; i < 3; i++) {
		for ( j = 0; j < 2; j++) {
			scanf("%f", &a[i][j]);
		}
	}
	
	printf("zadaj znova 6 desatinnych cisel: \n");
	for ( i = 0; i < 3; i++) {
		for ( j = 0; j < 2; j++) {
			scanf("%f", &b[i][j]);
		}
	}
	
	printf("\n\n\n");
	printf("Matica A: \n");
	
	for ( i = 0; i < 3; i++) {
		for ( j = 0; j < 2; j++) {
			printf("%f ", a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	printf("Matica B: \n");
	
	for ( i = 0; i < 3; i++) {
		for ( j = 0; j < 2; j++) {
			printf("%f ", b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	printf("Matica C: \n");
	
	for ( i = 0; i < 3; i++) {
		for ( j = 0; j < 2; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for ( i = 0; i < 3; i++) {
		for ( j = 0; j < 2; j++) {
			printf("%f ", c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
