#include <stdio.h>
#include <stdlib.h>

/* pretypovanie */

int main() 
{
	int a,b; // a-delenec	b-delitel
	float cd,rd; // cd-vysledok celociselneho delenia	rd-vysledok racioalneho delenia
	
	printf("Zadaj celociselneho delenca: ");
	scanf("%d",&a);
	printf("\nZadaj celociselneho delitela: ");
	scanf("%d",&b);
	printf("\nVysledok celociselneho delenia je %d", a/b);
	printf("\nVysledok racionalneho delenia je %.2f", (float)a/b);
	
	return 0;
}
