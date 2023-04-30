#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int greatNum(int a, int b) {
	int c;
	if (a<b){
		c = b;
	}
	else if (b<a) {
		c = a;
	}
	else {
		c = 0;
	}
	
	return c;
}

int main(int argc, char *argv[]) {
	int a, b, c;
	
	printf("zadaj dve cele cisla, ktore chces porovnat\n");
	scanf("%d %d",&a,&b);
	
	c = greatNum(a,b);
	
	if (c!=0) {
		printf("vacsie cislo je %d",c);
	}
	else {
		printf("cisla su rovnake");
	}
	
	return 0;
}