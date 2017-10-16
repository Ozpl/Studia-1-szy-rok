#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Wprowadz liczbe zapisana binarnie: \n");
    scanf("%d", &a);
    printf("Liczba zapisana binarnie: %d \nLiczba zapisana decymalnie: %d\n", a, BinToDec(a));
    return 0;
}

int BinToDec(int a) {
    int decymalny = 0, b = 0, reszta;
    while (a!=0) {
        reszta = a%10;
        a = a/10;
        decymalny = decymalny + reszta*pow(2,b);
        b++;
    }
    return decymalny;
}
