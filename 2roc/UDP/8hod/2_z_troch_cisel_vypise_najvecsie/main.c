#include <stdio.h>
#include <stdlib.h>

/* zadajte na vstupe 3 cele cisla porovnajte ich a vypiste najvecsie z nich */

int main() 
{
	int a,b,c;
	
	printf("zadaj prve cele cislo: ");
	scanf("%d",&a);
	printf("zadaj druhe cele cislo: ");
	scanf("%d",&b);
	printf("zadaj tretie cele cislo: ");
	scanf("%d",&c);
	
	if(a<b)
	{
		if(b<c)
		{
			printf("najvacsie cislo je: %d",c);
		}
		else
		{
			printf("najvacsie cislo je: %d",b);
		}
	}
	else
	{
		if(a<c)
		{
			printf("najvecsie cislo je: %d",c);
		}
		else
		{
			printf("najvecsie cislo je: %d",a);
		}
	}
	
	return 0;
}
