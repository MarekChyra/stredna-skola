#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void greatNum(int a, int b) {
	if (a>b) {
		printf("%d je vacsie cislo",a);
	}
	else if (b>a) {
		printf("%d je vacsie cislo",b);
	}
	else {
		printf("cisla su rovnake");
	}
}

int main(int argc, char *argv[]) {
	int a,b;
	
	printf("zadaj dve cele cisla, ktore chces porovnat\n");
	scanf("%d %d",&a,&b);
	
	greatNum(a,b);
	
	return 0;
}