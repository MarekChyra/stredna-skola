#include <stdio.h>
#include <stdlib.h>

/* nacitat hodnotu v mm	prepocitat a vypisat v dm, m, a in (25.4 mm) */

int main()
{
	float mm;
	float const in=25.4;
	
	printf("Zadaj realne cislo v mm: ");
	scanf("%f",&mm);
	printf("%f mm je \n\t%f dm \n\t%f m \n\t%f in", mm, mm/100.0, mm/1000.0, mm/in);
	
	return 0;
}
