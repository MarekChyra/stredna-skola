#include <stdio.h>
#include <stdlib.h>

/* priemerna vyska */

int main() {
	int celkovo,vyska,i;
	float priemer;
	
	for(i=1;i<=13;i++) {
		printf("zadaj vysku %d. ziaka: ",i);
		scanf("%d",&vyska);
		celkovo = celkovo + vyska;
	}
	
	priemer = celkovo/i;
	
	printf("priemer triedy je: %.2f",priemer);
	
	return 0;
}