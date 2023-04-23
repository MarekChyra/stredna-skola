#include <stdio.h>
#include <stdlib.h>

/* nacitat 2 odpory nacitat sposob zapojenia a vypocitat odpor */

int main() 
{
	float R1,R2;
	int typ;
	
	printf("Zadaj hodnotu R1: ");
	scanf("%f",&R1);
	printf("Zadaj hodnotu R2: ");
	scanf("%f",&R2);
	printf("Zadaj sposob zapojenia (1 = paralelne, 2 = seriove): ");
	scanf("%d",&typ);
	
	if(typ==1)
	{
		printf("Odpor pri paralelnom zapojeni je: %.2f\n",(R1*R2)/(R1+R2));
	}
	else
	{
		printf("Odpor pri seriovom zapojeni je: %.2f\n",R1+R2);
	}
	
	return 0;
}
