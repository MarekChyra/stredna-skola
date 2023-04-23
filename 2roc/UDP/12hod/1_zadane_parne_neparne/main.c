#include <stdio.h>
#include <stdlib.h>

/*  */

int main() {
	
	int teraz,parne=0,neparne=0;
	
	printf("zadavaj cisla, nulou vypneš program\n");
	
	do
	{
		scanf("%d",&teraz);
		if (teraz%2 == 0)
			parne++;
		else
			neparne++;
	}
	while(teraz!=0);
	
	printf("pocet parnych cisel: %d\n", parne-1);
	printf("pocet neparnych cisel: %d\n", neparne);
	return 0;
}
