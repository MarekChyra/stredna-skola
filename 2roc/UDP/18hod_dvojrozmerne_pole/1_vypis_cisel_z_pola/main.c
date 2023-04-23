#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int matica[2][2] = {{1,2},{3,4}};
	int i,j;
	
	printf("+-------+\n");
	
	for (i=0;i<2;i++) {
		printf("| ");
		for (j=0;j<2;j++) {
			printf("%d | ",matica[i][j]);
		}
		printf("\n");
	}
	
	printf("+-------+");
	
	return 0;
}