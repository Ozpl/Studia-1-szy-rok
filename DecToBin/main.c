#include <stdio.h>
#include <math.h>


int main() {
    int a;
    printf("Wprowadz liczbe zapisana decymalnie: ");
    scanf("%d", &a);      //nadaje wartosc a
    printf("\n%d w decymalnym = %d w binarnym", a, DecToBin(a));
    return 0;
}

int DecToBin(int a) {
    int binarny = 0, b = 1, reszta;

    while(a!=0) {
                printf("\n%d - b (wielokrotnosc 10)", b);
        reszta = a%2;
                printf("\n%d - reszta (czy jest reszta?)", reszta);
        a = a/2;
                printf("\n%d - a (dzielimy a przez 2)", a);
        binarny = binarny + (reszta*b);
                printf("\n%d - binarny (ile wynosi obecnie liczba w binarnym)\n\n", binarny);
        b = b*10;
    }
    return binarny;
}
