#include <stdio.h>
#include<string.h>
// Kis-nagybetüssé alakitáshoz
#include<ctype.h>


int main()
{

    // *** VÁLTOZÓ LETREHOZÁS *****
    char ch = 'a';
    int i;
    // Karakterekből álló tömb
    char karakterek[5] = {'N', 'O', 'R', 'B', 'I'};
    int tomb_meret = strlen(karakterek);
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
        // ASCII kódolás: kisbetüket . 97 -122 eltolom -32-el --> Nagybetü lesz
       /* if(karakterek[i] >=97 && karakterek[i] <=122){
            char c = karakterek[i]-32;
            printf("%c", c);
        }*/
        /* if(karakterek[i] >=65 && karakterek[i] <=90){
            char c = karakterek[i]+32;
            printf("%c", c);
        }*/
        // Nagybetüssé alakitás
        //printf("%c", toupper(karakterek[i]));

        // kisbetüssé alakitás
        printf("%c", tolower(karakterek[i]));
    }



    return 0;
}