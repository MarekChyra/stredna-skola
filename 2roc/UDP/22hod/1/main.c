#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void korent() {
	printf("Rovnica nema riesenie.");
}

void koren(float dis, float a, float b, float c) {
	float x;
	
	x = (-b) / (2 * a);
	
	printf("Rovnica ma 1 riesenie.\nx = %.2f",x);
}

void korene(float dis, float a, float b, float c) {
	float x1;
	float x2;
	
	x1 = (-b + sqrt(dis)) / (2 * a);
	x2 = (-b - sqrt(dis)) / (2 * a);
	
	printf("Rovnica ma 2 riesenia.\nx1 = %.2f\nx2 = %.2f",x1,x2);
}

float dis(float a, float b, float c) {
	float dis;
	
	dis = (b*b) - 4 * a * c;
	if (dis < 0) {
		korent();
	}
	else if (dis == 0) {
		koren(dis, a, b, c);
	}
	else if (dis > 0) {
		korene(dis, a, b, c);
	}
	else {
		printf("nieco sa pokazilo\nskus znova");
	}
}

int main(int argc, char *argv[]) {
	float a, b, c;
	
	printf("zadaj koeficienty kvadratickej rovnice (a, b, c): ");
	scanf("%f %f %f",&a,&b,&c);
	
	dis(a, b, c);
	
	return 0;
}