#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int den, mesiac;
	
	printf("Zadaj den kedy si sa narodil: ");
	scanf("%d", &den);
	printf("Zadaj cislo mesiaca kedy si sa narodil: ");
	scanf("%d", &mesiac);
	printf("narodil si sa %d. %d.\n",den, mesiac);
	
	return 0;
}
