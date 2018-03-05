#include <stdio.h>
#include <stdlib.h>

int DodajDwaElementy(int jeden, int dwa) {
    int sumadodowania;
    sumadodowania=jeden+dwa;
    return sumadodowania;
}

int DwaElementyPrzezDwa(int pierwszy, int drugi)
{
    int MojWynik;
    MojWynik=(pierwszy+drugi)/2;
    return MojWynik;
}

int WynikMojegoMnozenia(int karpik,int karpik1)
{
    int WynikMnozenia;
    WynikMnozenia=karpik*karpik1;
    return WynikMnozenia;
}

int main() {
    int a,b,suma=0,wynik=0,wynikMnozenia=0;

    int a = 0;
    int b = 0;

    printf("\n Podaj liczbe a:");
    scanf("%i",&a);
    printf("\nPodaj liczbe b:");
    scanf("%i",&b);

    wynik=DwaElementyPrzezDwa(a,b);
    printf("Moj wynik dzielenia: %i",wynik);

    suma=DodajDwaElementy(a,b);
    printf("Suma = %i",suma);

    wynikMnozenia=WynikMojegoMnozenia(a,b);
    printf("\nWynik mojego mnozenia wynosi %i:",wynikMnozenia);

    return 0;
}
