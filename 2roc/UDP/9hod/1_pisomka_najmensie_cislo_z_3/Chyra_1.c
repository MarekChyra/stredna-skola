#include <stdio.h>
#include <stdlib.h>

/*  */

int main() 
{
	int a,b,c;
	
	printf("program vypise zo zadanych 3 cisel najmensie\n");
	printf("Zadaj prve cele cislo: ");
	scanf("%d",&a);	
	printf("Zadaj druhe cele cislo: ");
	scanf("%d",&b);	
	printf("Zadaj tretie cele cislo: ");
	scanf("%d",&c);
	
	if (a>b)
	{
		if (b>c)
		{
			printf("najmensie cislo je: %d",c);
		}
		else
		{
			printf("najmensie cislo je: %d",b);
		}
	}
	else
	{
		if (a>c)
		{
			printf("najmensie cislo je: %d",c);
		}
		else
		{
			printf("najmensie cislo je: %d",a);
		}
	}
	
	return 0;
}
