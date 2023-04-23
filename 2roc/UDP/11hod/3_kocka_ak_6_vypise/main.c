#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*  */

int main() 
{
	int cislo, hody=0;
	
	srand(time(0));
	
	do
	{
		cislo = (rand()%6)+1;
		printf("padlo %d\n",cislo);
		hody++;
	}
	while(cislo!=6);
	
	printf("hodil si cislo 6\npocet pokusov: %d",hody);	
	return 0;
}
