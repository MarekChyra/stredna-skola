#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int ziaci[13] = {187, 161, 170, 200, 159, 180, 190, 198, 160, 190, 178, 164, 182};
	int temp;
	int i,j;
	int celkovaVyska = 0;
	int nadpriemer = 0;
	int podpriemer = 0;
	
	for (i = 12; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (ziaci[j] > ziaci[j+1]) {
				temp = ziaci[j];
				ziaci[j] = ziaci[j+1];
				ziaci[j+1] = temp;
			}
		}
	}
	
	for (i = 0; i < 13; i++){
		celkovaVyska = celkovaVyska + ziaci[i];
	}
	
	float priemer = celkovaVyska / 13.0;
	roundf(priemer * 100) / 100;
	
	for (i = 0; i < 13; i++){
		if (ziaci[i] < priemer){
			podpriemer++;
		} else {
			nadpriemer++;
		}
	}
	
	printf("priemer: %.2f\npocet nadpriemer: %d\npodpriemer:%d\n",priemer, nadpriemer, podpriemer);
	
	for (i = 0; i < 13; i++) {
		printf("%d ", ziaci[i]);
	}
	
	return 0;
}
