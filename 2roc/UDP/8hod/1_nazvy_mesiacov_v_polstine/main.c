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
		case 1: printf("Stycze�"); break;
		case 2: printf("Luty"); break;
		case 3: printf("Marsz"); break;
		case 4: printf("Kwiecie�"); break;
		case 5: printf("Mo�e"); break;
		case 6: printf("czerwiec"); break;
		case 7: printf("Lipiec"); break;
		case 8: printf("Sierpie�"); break;
		case 9: printf("Wrzesie�"); break;
		case 10: printf("Pa�dziernik"); break;
		case 11: printf("Listopad"); break;
		case 12: printf("Grudzie�"); break;
		default: printf("zadal si zle cislo");		
	}
	
	return 0;
}
