#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Wpisz liczbe zapisana decymalnie: \n");
    scanf("%d", &a);
    printf("Liczba zapisana decymalnie: %d \nLiczba zapisana binarnie: %d", a, DecToBin(a));
    return 0;
}

int DecToBin (int a) {
    int binarny = 0, b = 1, reszta;
    while (a!=0) {
        reszta = a%2;
        a=a/2;
        binarny=binarny+(reszta*b);
        b=b*10;
    }
    return binarny;
}
