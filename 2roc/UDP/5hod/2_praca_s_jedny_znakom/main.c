#include <stdio.h>
#include <stdlib.h>

/* praca s jednym znakom */

int main() 
{
	int znak;
	int hehe = 'A';
	
	printf("zadaj jeden znak\n");
	znak = getchar();
	printf("stlacil si %c", znak);
	printf("\n\n");
	putchar(6);
	putchar('\n');
	putchar('6');
	putchar('\n');
	putchar(hehe);
	
	return 0;
}
