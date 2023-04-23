#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* vygeneruje 50 nahodnych cisel a vypise cisla delitelne 5 */

int main(int argc, char *argv[]) {
	int i,cisla[50],a=0,del[0];
	
	srand(time(0));
	
	for (i=0;i<50;i++) {
		cisla[i] = (rand()%10)+1;
		
		if (cisla[i]%5==0) {
			del[a] = cisla[i];
			a++;
		}
	}
	
	printf("zadane cisla, ktore su delitelne cislom 5: ");
	
	for (i=0;i<a;i++) {
		printf("%d, ",del[i]);
	}
	
	return 0;
}
