#include <stdio.h>
#include <stdlib.h>

/*  */

int main() 
{
	float a;
	
	printf("zajad cislo: ");
	scanf("%f",&a);
	if (a == 0)
	{
		printf("zadal si nulu");
	}
	else
	{
		if (a%2==0)
		{
			printf("cislo je parne");
		}
		else
		{
			printf("cislo je neparne");
		}
	}
	if (a<0)
	{
		printf("cislo je zaporne");
	}
	else
	{
		printf("cislo je kladne");
	}
	
	return 0;
}
