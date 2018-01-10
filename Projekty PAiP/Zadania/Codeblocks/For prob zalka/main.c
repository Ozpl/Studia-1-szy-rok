#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i = 0, n = 0, sum = 0, kw = 0;
    int x[20];
    printf("Wpisz ilosc elementow tablicy (n < 20) = ");
    scanf("%i",&n);

    printf("\n\nWpisz elementy tablicy = \n");
    for (i=0; i < n; i++) {
        printf("x[%i] = ",i);
        scanf("%i",&x[i]);
    }

    printf("\n\nWpisana tablica = ");
    for (i=0; i < n; i++) {
        printf("\nx[%i] = %i",i,x[i]);
    }

    for (i=0; i < n; i++) {
        if (x[i] > -5 && x[i] < 5) {
            kw = pow(x[i],2);
            sum += kw;
        }
    }

    printf("\n\nSuma kwadratow jest rowna = %i",sum);

    return 0;
}
