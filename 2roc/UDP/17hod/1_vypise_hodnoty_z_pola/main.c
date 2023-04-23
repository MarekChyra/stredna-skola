#include <stdio.h>
#include <stdlib.h>

/* inicializujte pole s prvkami 3.24, -0.236, 6521, 33001, -4560, 0.00012, 15478, 0.01, 1462.3 */

int main() {
	float cisla[9]={3.24,-0.236,65.21,33.001,-4560,0.00012,15.478,0.01, 1462.3};
	int i;
	
	printf("index\thodnota\n");
	for (i=0;i<9;i++) {
		printf("%3d\t%11.5f\n",i,cisla[i]);
	}
	
	return 0;
}