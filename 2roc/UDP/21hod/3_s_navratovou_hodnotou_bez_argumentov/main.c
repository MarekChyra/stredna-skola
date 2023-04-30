#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int greatNum() {
	int a, b, c;
	
	printf("zadaj dve cele cisla, ktore chces porovnat\n");
	scanf("%d %d",&a,&b);
	
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
	int c;
	
	c = greatNum();
	
	if (c==0) {
		printf("cisla su rovnake");
	}
	else {
		printf("vacsie cislo je %d",c);
	}
	return 0;
}