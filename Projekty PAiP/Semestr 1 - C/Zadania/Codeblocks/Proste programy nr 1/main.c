/**
1. Dane s¹ dwie liczby rzeczywiste(zmiennopozycyjne). Obliczyæ ich sumê , ró¿nicê , iloczyn oraz iloraz (uwaga na dzielenie przez 0!).
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,suma,roznica,iloczyn,iloraz;
    printf("Wpisz pierwsza liczbe: ");
    scanf("%d",&x);
    printf("\nWpisz druga liczbe: ");
    scanf("%d",&y);

    suma = x + y;
    printf("\n\nSuma jest rowna: %d",suma);

    roznica = x - y;
    printf("\n\nRoznica jest rowna: %d",roznica);

    iloczyn = x * y;
    printf("\n\nIloczyn jest rowny: %d",iloczyn);

    if (y != 0) {
    iloraz = x / y;
    printf("\n\nIloraz jest rowny: %d\n",iloraz);
    }
    else {
        printf("\n\nNie mozna dzielic przez 0!\n");
    }

    return 0;
}
