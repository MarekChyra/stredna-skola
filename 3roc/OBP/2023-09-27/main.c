#include <stdio.h>
#include <stdlib.h>


int uloha1() { // Nap�te program, ktor� na��ta 3 cel� ��sla zo s�boru cisla.txt a ich s��et zap�e do s�boru vysledok.txt. (s�bor cisla.txt m�te v pr�lohe).
	int vysledok = 0;
	int cislo;
	int i;
	
	FILE *fr = fopen("cisla.txt", "r");
	
	if(fr == NULL) {
		printf("nevies programovat");
		return 1;
	}
	
	for (i = 0; i < 3; i++) {
		fscanf(fr, "%d", &cislo);
		vysledok += cislo;
	}
	
	fclose(fr);
	
	FILE *fw = fopen("vysledok.txt", "w");
	
	if(fw == NULL) {
		printf("nevies programovat");
		return 1;
	}
	
	fprintf(fw, "%d", vysledok);
	
	fclose(fw);
	
	return 0;
}

int uloha2() { // Nap�te program, ktor� pre��ta 10 znakov z kl�vesnice a zap�e ich do s�boru znaky.txt.
	int i;
	char znak;
	
	FILE *f = fopen("znaky.txt", "w");
	
	if(f == NULL) {
		printf("nevies programovat");
		return 1;
	}
	
	for(i = 0; i < 10; i++) {
		scanf(" %c", &znak);
		fprintf(f, "%c", znak);
		
	}
	
	fclose(f);
	
	return 0;
}

int uloha3() { // program precita jeden riadok zo suboru DOPIS.TXT a opise ho na obrazovku vratane noveho riadku
	int c;
	
	FILE *f = fopen("dopis.txt", "r");
	
	if(f == NULL) {
		printf("nevies programovat");
		return 1;
	}
	
	while((c = getc(f)) != '\n') {
		putchar(c);
	}
	
	putchar(c);
	
	fclose(f);

	return 0;
}

int uloha4() { // program skopiruje subor original.txt do suboru kopia.txt
	char riadok[500];
	
	FILE *fr = fopen("original.txt", "r");
	FILE *fw = fopen("kopia.txt", "w");
	
    while(fgets(riadok, 500, fr)!= NULL) {
      fprintf(fw, "%s", riadok); 
    }
    
    fclose(fr);
    fclose(fw);
}

int main(int argc, char *argv[]) {
	uloha4();
	
	return 0;
}
