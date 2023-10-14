# Subory
## deklaracia
FILE \*f;
FILE \*fr, \*fw;
## otvorenie suboru
f = fopen("a.txt", "r")
f = fopen("vystup.txt", "w")
f = fopen("d:\\\\a.txt", "r")
- pri binarnych suboroch sa namiesto "r" sa pouzie "rb" a namiesto "w" je "wb"
- nespravne otvorenie suboru je NULL
## citanie znaku
c = getc(f);
c - typu int !!!
## zapis znaku
putc(c, f);
## formatovane citanie
fscanf(f, "format", argument);
- vrati pocet precitanych poloziek
## formatovany zapis
fprintf(f, "format", argumenty);
## uhoncenie prace so suborom
fclose(f);
## test spravnosti otvorenia suboru
if ((f = fopen(“test.txt”, “r”)) == NULL) {
 printf(“Subor sa nepodarilo otvorit”);
 
 return 1;
}

**alebo**

f = fopen(“test.txt”, “r”);

if (f == NULL) {
 printf(“Subor sa nepodarilo otvorit”);
 
 return 1;
}
## test spravnosti otvorenia suboru
if (fclose(f) == EOF) {
 printf(“subor sa nepodarilo zatvorit”);
}
## test konca riadku
while ((c = getc(f)) != ‘\n’);
## test konca suboru
while ((c = getc(f)) != EOF)