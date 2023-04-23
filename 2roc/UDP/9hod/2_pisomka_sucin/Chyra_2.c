#include <stdio.h>
#include <stdlib.h>

/*  */

int main() 
{
	int a,b;
	
	printf("zadaj prve cislo: ");
	scanf("%d",&a);
	printf("zadaj druhe cislo: ");
	scanf("%d",&b);
	
	if (a*b<0)
	{
		printf("sucin zadanych cisel je zaporny");
	}
	else
	{
		if (a*b>0)
		{
			printf("sucin zadanych cisel je kladny");
		}
		else
		{
			printf("sucin zadanych æisel je 0");
		}
	}
	
	return 0;
}
