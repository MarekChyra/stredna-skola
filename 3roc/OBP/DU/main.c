#include <stdio.h>
#include <stdlib.h>

void uloha1() {
  FILE *f = fopen("cisla.txt", "w");

  for (int i = 1; i < 21; i++) {
    fprintf(f, "%c%.2f\n", 36, 3.14 * i);
  }

  if(fclose(f) == EOF) {
    printf("nevies zatvarat subor\n");
  }
}

void uloha2() {
  float cislo;
  float priemer = 0.0;

  FILE *f;

  if ((f = fopen("cisla.txt", "r")) == NULL) {
    printf("nevies programovat\n");
    return;
  }

  while (fscanf(f, "$%f\n", &cislo)) {
    cislo = cislo * 100;

    for (int i = 0; i < 4; i++) {
      priemer += cislo % 10.0;
      cislo = cislo / 10;
    }

    printf("%.2f", priemer / )
  }
}

int main() {
  uloha1();

  return 0;
}
