#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 0, i = 0, n = 0, idziel = 0, ndziel = 0;
    int x[20], dziel[20];
    printf("Wpisz liczbe a = ");
    scanf("%i",&a);
    printf("\nWpisz ilosc elementow tablicy (n < 20) = ");
    scanf("%i",&n);
    printf("\n\nWpisz elementy tablicy = \n");

    for (i=0; i < n; i++) {
        printf("x[%i] = ",i);
        scanf("%i",&x[i]);
    }

    printf("\nLiczba a = %i",a);
    printf("\nRozmiar tablicy = %i",n);
    printf("\n\nWyswietlona tablica = \n");
    for (i=0; i < n; i++) {
        printf("x[%i] = %i\n", i, x[i]);
    }

    for (i=0; i < n; i++) {
        if (x[i] != 0 && a % x[i] == 0) {
            dziel[idziel] = x[i];
            idziel++;
            ndziel++;
        }
    }

    printf("\n\nLiczba elementow podzielnych przez %i = %i",a,ndziel);
    printf("\nDzielniki liczby %i = \n",a);
    for (idziel=0; idziel < ndziel; idziel++) {
        printf("dziel[%i] = %i\n", idziel, dziel[idziel]);
    }

    return 0;
}
