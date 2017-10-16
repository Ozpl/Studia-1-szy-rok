#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Wpisz liczbe zapisana binarnie: \n");
    scanf("%d", &a);
    printf("Liczba zapisana binarnie: %d \nLiczba zapisana decymalnie: %d\n", a, BinToHexDec(a));
    return 0;
}

int BinToHexDec (int a) {
    int hexadecymalnie = 0, b = 1, reszta;
    while (a!=0) {
        reszta = a % 10;
        hexadecymalnie = hexadecymalnie + reszta * b;
        b = b * 2;
        a = a / 10;
    }
    return hexadecymalnie;
}
