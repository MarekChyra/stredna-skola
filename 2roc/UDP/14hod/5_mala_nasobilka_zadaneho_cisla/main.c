#include <stdio.h>
#include <stdlib.h>

/* mala nasobila yadaneho cila */

int main() {
	int cislo;
	
	printf("zadaj cislo ktoreho chces zobrazit malu nasobilku");
	scanf("%d",&cislo);
	
	for(int i=0;i<=10;i++) {
		printf("%2d\t%5d*%2d=%2d\n",i,i,cislo,i*cislo);
	}
	
	return 0;
}