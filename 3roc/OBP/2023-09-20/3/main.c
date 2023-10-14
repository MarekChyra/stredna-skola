#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	int sucet = 0;
	
	int matica[4][4] = {
	{1, 8, 0, -1}, 
	{6, 5, 4, 7},
	{4, -2, 0, 3},
	{3, 1, 2, 2}
	};
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", matica[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for (i = 0; i < 4; i++) {
		sucet = sucet + matica[3-i][i];
	}
	
	printf("%d", sucet);
	
	return 0;
}
