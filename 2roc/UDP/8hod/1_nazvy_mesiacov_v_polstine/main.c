#include <stdio.h>
#include <stdlib.h>

/* program vypisuje nazvy mesiacov v polstine */

int main() 
{
	int mesiac;
	
	printf("program vypisuje nazvy mesiacov v polstine\n\n");
	printf("Zadaj cislo mesiaca: ");
	scanf("%d",&mesiac);
	
	switch(mesiac)
	{
		case 1: printf("Styczeñ"); break;
		case 2: printf("Luty"); break;
		case 3: printf("Marsz"); break;
		case 4: printf("Kwiecieñ"); break;
		case 5: printf("Mo¿e"); break;
		case 6: printf("czerwiec"); break;
		case 7: printf("Lipiec"); break;
		case 8: printf("Sierpieñ"); break;
		case 9: printf("Wrzesieñ"); break;
		case 10: printf("PaŸdziernik"); break;
		case 11: printf("Listopad"); break;
		case 12: printf("Grudzieñ"); break;
		default: printf("zadal si zle cislo");		
	}
	
	return 0;
}
