#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* kamen papier noznice */

int main() {
	int user1,user2,pc1,pc2,body=0,hra=0;
	
	srand(time(0));
	
	printf("KAMEN\tPAPIER\tNOZNICE\n\n");
	
	while(hra<3) {
		hra++;
		pc1 = (rand()%3)+1;
		printf("Zadaj cislo\n1 pre noznice\n2 pre papier\n3 pre kamen\n");
		scanf("%d",&user1);
		if(user1==1) {
			user2=4;
		}
		if(pc1==1) {
			pc2=4;
		}
		if(user1 == pc1+1 || user1==pc2-1) {
			printf("\n\nvyhral si, dostanes 2 body\n\n");
			body = body + 2;
		}
		else if(pc1 == user1+1 || pc1==user2-1) {
			printf("\n\nprehral si, nedostanes body\n\n");
		}
		else if(pc1==user1) {
			printf("\n\nremiza, dastanes 1 bod\n\n");
			body++;
		}
	}
	if(body>3) {
		printf("vyhral si, dostal si %d bodov",body);
	}
	else if(body==3) {
		printf("remiza, dostal si %d bodov",body);
	}
	else if(body<3) {
		printf("prehral si, dostal si %d bodov",body);
	}
	
	return 0;
}
