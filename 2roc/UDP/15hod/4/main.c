#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,j,k,x,y;
	
	printf("asdasd");
	scanf("%d",&x);
	
	y = x-1;
	y = y/2;
	
	for (i=1;i<=x;i++) {
		printf("\n");
		for (j=y;j>=0;j--) {
			printf(" ");
		}
		for (k=1;k<=x;k++) {
			printf("*");
		}
	}
	
	return 0;
}