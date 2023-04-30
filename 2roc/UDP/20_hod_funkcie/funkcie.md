# Funkcie

- jazyk C je založený na funkciách
- každý program obsahuje funkciu main
- funkcie obsahuju také príkazy, ktoré sa v programe často vyskytujú
- zvčajne **vracajú hodnotu**; možu ale nemusia mať parametre

- štandardné
    - ich deklarácia je popísaná v hlavičkových súborov
- uživateľské
    - napisali sme ich my, máme ich zdrojové texty


typ navratovej hodnoty<br>
+|++++nazov funkcie<br>
+|++++|+++++++++++argumenty funkcie<br>
+|++++|+++++++++++|<br>
int main(int argc, char **argv){  <---hlavička funkcie<br>
    printf("Hello World\n");<br>
    return 0;   <br>
}

- pokial funkcia nemá návratovú hodnotu, pred menom funkcie píšeme **void**