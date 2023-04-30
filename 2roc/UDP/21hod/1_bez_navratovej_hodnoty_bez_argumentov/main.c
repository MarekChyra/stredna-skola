#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void greatNum() {
	int a, b;
	
	printf("zadaj dve cele cisla, ktore chces porovnat\n");
	scanf("%d %d",&a,&b);
	
	if (a<b){
		printf("vacsie cislo je %d",b);
	}
	else if (b<a) {
		printf("vacsie cislo je %d",a);
	}
	else {
		printf("cisla su rovnake");
	}
}

int main(int argc, char *argv[]) {
	greatNum();
	
	return 0;
}