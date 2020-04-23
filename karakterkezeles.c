#include <stdio.h>

int main()
{

    // *** VÁLTOZÓ LETREHOZÁS *****
    char ch = 'a';
    int i;
    // KArakterekből álló tömb
    char karakterek[5] = {'n', 'o', 'r', 'b', 'i'};
    int tomb_meret = sizeof(karakterek)/sizeof(karakterek[0]);
    printf("Tömb mérete: %d\n" , tomb_meret);


    // *** KIIRATÁSOK *****
    printf("egy darab karakter: %c\n", ch);

    // Karakter tömb kiiratása
    printf("A megadott karakterlánc: ");
    for(i = 0; i<3;i++) {
        printf("%c", karakterek[i]);
    }
    printf("\n--------------\nMEgadott karakterlánc: ");
    // Megkerestük a mnéretet (tömb_meret) eddig fut a ciklus
    for(i = 0; i<tomb_meret;i++) {
        printf("%c", karakterek[i]);
    }



    return 0;
}