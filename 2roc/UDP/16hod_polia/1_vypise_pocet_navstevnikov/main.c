#include <stdio.h>
#include <stdlib.h>

/* vypise pocet navstevnikov */

int main() {
	int navstevnost[7]={15,20,46,10,30,50,30};
	int i;
	
	printf("POCET NAVSTEVNIKOV V ZOO ZA UPLYNULY TYZDEN\n\n");
	
	for (i=0;i<7;i++) {
		printf("%d. den: %d\n",i+1,navstevnost[i]);
	}
	
	return 0;
}
