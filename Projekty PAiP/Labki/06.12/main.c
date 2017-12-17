#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x[10][10], i = 0, j = 0, n, liczkol = 0, ujem = 1, ilosc = 0, liczujem = 0, a = 0, b = 80;
    printf("Podaj rozmiar macierzy kwadratowej = ");
    scanf("%i",&n);
    srand(time(NULL));

    printf("\nLosowanie liczby z przedzia³u <a,b> = <%i,%i>", a-30, b-30);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            //printf("\nPodaj element x[%i][%i] = ",i,j);
            //scanf("%i",&x[i][j]);
            x[i][j]=rand()%(b-a+1)-30;
        }
    }

    printf("\n\nPodana tablica = \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%5i",x[i][j]);
        }
        printf("\n");
    }

    liczkol = n;

    for (j=0; j < n; j++) {
        for (i=0; i < n; i++) {
            if (x[i][j] % 2 != 0) {
                liczkol--;
                break;
            }
        }
    }

    for (i=0; i < n; i++) {
        if (x[i][n-1-i] < 0) {
            ujem *= x[i][n-1-i];
            liczujem++;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i <= j && i+j>=n-1) {
                if (x[i][j] % 3 == 0) {
                    ilosc++;
                }
            }
        }
    }

    printf("\n\nLiczba kolumn parzystych = %i",liczkol);
    if  (ujem != 1) {
        printf("\nIloczyn ujemnych na drugiej przekatnej = %i",ujem);
        printf("\nIlosc liczb ujemnych na drugiej przekatnej = %i",liczujem);
    }
    else {
        printf("\nNa drugiej przekatnej nie ma liczb ujemnych");
    }

    printf("\n\nIlosc liczb podzielnych przez 3 w trojkacie = %i",ilosc);
    printf("\nTrojkat = ");

    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++) {
            if (i <= j && i+j>=n-1) {
                printf("%5i",x[i][j]);
            }
            else printf("     ");
        }
    }

    return 0;
}
