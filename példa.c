#include <stdio.h>

// Itt definiálod elöször amit szeretnél, milyen függvényed lesz
int osszead(int a, int b);

// Ezek a függvények amiket meg kell irni alul
// ez az első lépés
int kivonas(int a, int b);

int szorzas(int a, int b);

int osztas(int a, int b);

double terulet(int r);

double kerulet(int r);

int main()
{

    // Ide jön a kód..valami
    /* Mindig a kódba ird fölé mint én most amit változtattál
    Jó lesz, jól emlékeztél, ez a függvény hivás. Viszont itt már konkrét adatok kellenek neki
    A main() függvényen kivül kell létrehozni a függvény törzsét és tartalmát
    */
    // Ebbe a 'szam' nevü változoba mentem ki a függvény értékét
    //Megtehetem, hiszen tudom, hogy ez a függvény (osszead()) egy számot ad vissza
    double haj = 0.0;//legnagyobb tizedes
    float ertek;//normal
    int szam = osszead(3, 4);// legkisebb
    short sh = 234567;
    int 
    printf("SHORT ERTEK %d\n-----------\n", sh); 
    printf("%d", szam);
    // És kiiratom a számot

    // harmadik lépés
    printf("A megadott összeg: %d\n", szam);

    szam = kivonas(10, 6);
    printf("%d\n", szam);

    szam = szorzas(10, 5);
    printf("%d\n", szam);

    haj = kerulet(4);
    printf("%.2f\n", haj);

    haj = terulet(2);
    printf("%.2f\n", haj);

    return 0;
}
// ********* MAIN VÉGE *************

// Ez egy int függvény , tehát egy számmal fog visszatérni: return a + b
int osszead(int a, int b)
{

    return a + b;
}

/* Az összeadás mintájára probáld megirni a szorzást, kivonást , osztást és kiiratni.
A függvényeket felül találod hogy kell kinézzen. Te pedig itt lenn bontsd ki és ird meg, 
majd hivd meg a main függvénybe őket és irasd ki.

*/

// Második lépés

int kivonas(int a, int b)
{
    return a - b;
}
int szorzas(int a, int b)
{
    return a * b;
}

double terulet(int r)
{
    return r * r * 3.14;
}
double kerulet(int r)
{
    return 2 * r * 3.14;
}