#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,j,x,y;
	
	printf("zadaj sirku: ");
	scanf("%d",&x);
	printf("zadaj vysku: ");
	scanf("%d",&y);
	
	for (i=1;i<=x;i++) {
		printf("*");
	}
	printf("\n");
	for (i=1;i<=y-2;i++) {
		printf("*");
		for (j=1;j<=x-2;j++) {
			printf(" ");
		}
		printf("*\n");
	}
	for (i=1;i<=x;i++) {
		printf("*");
	}
	
	return 0;
}