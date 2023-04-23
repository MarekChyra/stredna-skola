#include <stdio.h>
#include <stdlib.h>

/*  */

int main() 
{
	int a,b;
	
	printf("program zisti zo zadanych cisel ci sucin 2 cisel je kladny, zaporny alebo 0\n");
	printf("zadaj prve cele cislo: ");
	scanf("%d",&a);
	printf("zadaj druhe cele cislo: ");
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
