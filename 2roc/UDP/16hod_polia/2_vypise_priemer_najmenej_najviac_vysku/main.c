#include <stdio.h>
#include <stdlib.h>

/* zo zadanych vysok vypise priemernu, navacsiu a najmensiu vysku */

int main(int argc, char *argv[]) {
	int pocet,i,max,min,celkom;
	float avg;
	
	printf("zadaj pocet ziakov: ");
	scanf("%d",&pocet);
	
	int vyska[pocet];
	
	printf("Zadavaj vysky ziakov v cm\n");
	
	for(i=0;i<pocet;i++) {
		scanf("%d",&vyska[i]);
	}
	
	/*
	for (i=pocet-1;i>=0;i--) {
		printf("%d ",vyska[i]);
	}
	*/
	
	for (i=0;i<pocet;i++) {
		celkom = celkom + vyska[i];
	}
	
	avg = celkom / pocet;
	
	printf("\n\npriemerna vyska je: %f\n",avg);
	
	min = vyska[0];
	
	for (i=0;i<pocet;i++) {
		
		if (vyska[i]<min) {
			min = vyska[i];
		}
		
		else {
			if(vyska[i]>max) {
				max = vyska[i];
			}
		}
	}
	
	printf("minimalna vyska je %d\n",min);
	printf("maximalna vyska je %d\n",max);
	
	return 0;
}
