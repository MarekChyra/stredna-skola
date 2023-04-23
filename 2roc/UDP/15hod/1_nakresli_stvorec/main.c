#include <stdio.h>
#include <stdlib.h>

/* nakresli stvorec */

int main() {
	int i,j,x,y;
	
	printf("zadaj sirku: ");
	scanf("%d",&x);
	printf("zadaj vysku: ");
	scanf("%d",&y);
	
	for (i=1;i<=y;i++) {
    	for (j=1;j<=x;j++)
        	printf("*");
    	printf("\n");
	}
        	
	return 0;
}
