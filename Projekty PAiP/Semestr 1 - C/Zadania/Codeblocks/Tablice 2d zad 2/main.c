#include <stdio.h>
#include <stdlib.h>

int main() {
    int x[10][10], y[10], z[10];
    int i = 0, j = 0, n = 0, ilocz = 1, najmn = 0, inajmn = 0, nieparz = 0;

    printf("Podaj rozmiar tablicy kwadratowej = ");
    scanf("%i",&n);

    printf("\n\nPodaj elementy tej tablicy = ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("\nx[%i][%i] = ",i,j);
            scanf("%i",&x[i][j]);
        }
    }

    printf("\n\nWpisana tablica = \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%5i",x[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j && x[i][j] > 0) {
                ilocz *= x[i][j];
            }
        }
    }
    if (ilocz != 1) {
        printf("\n\nIloczyn liczb wiekszych od zera lezacych na glownej przekatnej = %i\n",ilocz);
    }
    else
        printf("Na glownej przekatnej nie ma liczb wiekszych od zera\n");

    najmn = x[0][0];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (x[i][j] < najmn) {
                najmn = x[i][j];
                inajmn = j;
            }
        }
        y[i] = najmn;
        z[i] = inajmn;
        najmn = x[i+1][0];
        inajmn = 0;
    }

    printf("\n\nNajmniejsza wartosc w wierszu i jej polozenie = \n");
    for (i=0; i < n; i++) {
        printf("%i     %i\n",y[i],z[i]+1);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i <= j && i+j < n-1) {
                if (x[i][j] % 2 != 0) {
                    nieparz++;
                }
            }
        }
    }

    printf("\n\nLiczb nieparzystych w gornym trojkacie (lacznie z glowna przekatna) jest = %i",nieparz);
    printf("\nGorny trojkat = ");
    for (i = 0; i < n; i++) {
            printf("\n");
        for (j = 0; j < n; j++) {
            if (i <= j && i+j < n-1) {
                printf("%5i",x[i][j]);
            }
            else
                printf("     ");
        }
    }

    return 0;
}
