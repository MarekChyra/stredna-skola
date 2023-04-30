#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void pozdrav();
void pozdrav1(char meno[]);

int main() {
	char meno[0];
	
	printf("Ako sa volas?\n");
	scanf("%s",&meno[0]);
	
	pozdrav1(meno);
	
	return 0;
}

void pozdrav() {
	printf("Ahoj\n");
}

void pozdrav1(char meno[]) {
	printf("Ahoj %s\n",meno);
}