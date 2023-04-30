#include <stdio.h>
#include <stdlib.h>

/* funkcia bude vypisovat asci kod znaku */

void asci(int kod) {
	printf("ASCII: %d\tznak: %c\n",kod,kod);
}

int main(int argc, char *argv[]) {
	int kod;
	
	for (kod=20;kod<=120;kod++) {
		asci(kod);
	}
	
	return 0;
}