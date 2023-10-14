#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void num0() {
	printf(" _ \n");
	printf("| |\n");
	printf("|_|\n");
}

void num1() {
	printf("   \n");
	printf("  |\n");
	printf("  |\n");
}

void num2() {
	printf(" _ \n");
	printf(" _|\n");
	printf("|_ \n");
}

void num3() {
	printf(" _ \n");
	printf(" _|\n");
	printf(" _|\n");
}

void num4() {
	printf("   \n");
	printf("|_|\n");
	printf("  |\n");
}

void num5() {
	printf(" _ \n");
	printf("|_ \n");
	printf(" _|\n");
}

void num6() {
	printf("   \n");
	printf("|_ \n");
	printf("|_|\n");
}

void num7() {
	printf(" _ \n");
	printf("  |\n");
	printf("  |\n");
}

void num8() {
	printf(" _ \n");
	printf("|_|\n");
	printf("|_|\n");
}

void num9() {
	printf(" _ \n");
	printf("|_|\n");
	printf("  |\n");
}

int main(int argc, char *argv[]) {
	int cislo;
	
	printf("zadaj cislo od 0 do 9: ");
	scanf("%d", &cislo);
	
	switch(cislo){
		case 0:
			num0();
			break;
		case 1:
			num1();
			break;
		case 2:
			num2();
			break;
		case 3:
			num3();
			break;
		case 4:
			num4();
			break;
		case 5:
			num5();
			break;
		case 6:
			num6();
			break;
		case 7:
			num7();
			break;
		case 8:
			num8();
			break;
		case 9:
			num9();
			break;
		default:
			printf("daco zle si zadal");
	}
	
	return 0;
}
