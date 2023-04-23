#include <stdio.h>
#include <stdlib.h>

/* sekundy premeni na hodiny, minuty a sekundy */

int main() {
	int h,min,s,povodne;
	
	printf("zadaj pocet sekund\n");
	scanf("%d",&s);
	
	povodne = s;
	
	if(s>59) {
		min = s/60;
		s = s%(min/60);
	}
	
	if(min>59) {
		h = min/60;
		min = min%(h/60);
	}
	
	printf("%d sekund je %d hodin, %d minut, %d sekund",povodne,h,min,s);
	
	return 0;
}
