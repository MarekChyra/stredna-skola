#include <stdio.h>
#include <stdlib.h>

/* vypise cisla z intervalu */

int main() {
	int a,b,i;
	
	printf("zadaj prve cislo intervalu: ");
	scanf("%d",&a);
	printf("zadaj druhe cislo intervalu: ");
	scanf("%d",&b);
	
	if(a>b) {
		printf("druhe cislo je vecie ako prve\n");
	}
	while(a>b) {
		printf("zadaj este raz: ");
		scanf("%d",&b);
	}
	
	printf("cele cisla v intervali:\n");
	for(i=a;i<=b;i++) {
		printf("%d \n",i);
	}
	
	return 0;
}
