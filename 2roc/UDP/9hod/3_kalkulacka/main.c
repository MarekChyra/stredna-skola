#include <stdio.h>
#include <stdlib.h>

/* kalkulacka */

int main() 
{
	float a,b;
	int funkcia;
	
	printf("kalkulacka\n");
	printf("pre scitanie stlac 1\npre odcitanie stlac 2\npre nasobenie stlac 3\npre delenie stlac 4\n");
	scanf("%d",&funkcia);
	printf("zadaj prve cislo: ");
	scanf("%f",&a);
	printf("zadaj druhe cislo: ");
	scanf("%f",&b);
	
	switch(funkcia)
	{
		case 1: printf("%f + %f = %f",a,b,a+b); break;
		case 2: printf("%f - %f = %f",a,b,a-b); break;
		case 3: printf("%f * %f = %f",a,b,a*b); break;
		case 4: printf("%f / %f = %f",a,b,a/b); break;
		default: printf("zadal si zle cislo");
	}
	
	return 0;
}
