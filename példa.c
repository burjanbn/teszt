#include<stdio.h>

// Itt definiálod elöször amit szeretnél, milyen függvényed lesz
int osszead(int a, int b);

// Ezek a függvények amiket meg kell irni alul
int kivonas(int a , int b); 

int szorzas(int a , int b); 

int osztas(int a , int b);

int main(){
    // Ide jön a kód..valami
    /* Mindig a kódba ird fölé mint én most amit változtattál
    Jó lesz, jól emlékeztél, ez a függvény hivás. Viszont itt már konkrét adatok kellenek neki
    A main() függvényen kivül kell létrehozni a függvény törzsét és tartalmát
    */
    // Ebbe a 'szam' nevü változoba mentem ki a függvény értékét
    //Megtehetem, hiszen tudom, hogy ez a függvény (osszead()) egy számot ad vissza
    int szam = osszead(3,4);
    
    // És kiiratom a számot
    printf("A megadott összeg: %d\n", szam);
    
    return 0;
}

// Ez egy int függvény , tehát egy számmal fog visszatérni: return a + b
int osszead(int a , int b) {

    return a + b;
}

/* Az összeadás mintájára probáld megirni a szorzást, kivonást , osztást és kiiratni.
A függvényeket felül találod hogy kell kinézzen. Te pedig itt lenn bontsd ki és ird meg, 
majd hivd meg a main függvénybe őket és irasd ki.
*/
