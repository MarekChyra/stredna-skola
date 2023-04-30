#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void nacitanie_do_pola(int velkost_pola, int pole[]);
void vypis_pola(int velkost_pola, int pole[]);

int main(int argc, char *argv[]) {
	int pole[10];
	
	nacitanie_do_pola(10, pole[10]);
	vypis_pola(10, pole[10]);
	
	return 0;
}

void nacitanie_do_pola(int velkost_pola, int pole[]) {
	int i;
	for(i=0;i<velkost_pola;i++) {
		scanf("%d",&pole[i]);
	}
}

void vypis_pola(int velkost_pola, int pole[]) {
	int i;
	for(i=0;i<velkost_pola;i++) {
		printf("%d, ",pole[i]);
	}
}