#include <stdio.h>
#include <stdlib.h>

/* priemer zo zadanych cisel */

int main(int argc, char *argv[]) {
	int i,pocet,celkom;
	float priemer;
	
	printf("zadaj kolko cisel chces nacitat\n");
	scanf("%d",&pocet);
	
	int cisla[pocet];
	
	printf("zadavaj cisla: \n");
	
	for (i=0;i<pocet;i++) {
		scanf("%d",&cisla[i]);
	}
	
	for (i=0;i<pocet;i++) {
		celkom = celkom + cisla[i];
	}
	
	priemer = celkom/pocet;
	
	printf("priemer zadanych cisel je: %.2f",priemer);
	
	return 0;
}
