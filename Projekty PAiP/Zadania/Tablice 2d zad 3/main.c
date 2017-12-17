#include <stdio.h>
#include <stdlib.h>

int main() {
    int x[10][10], y[10], z[10];
    int i = 0, j = 0, k = 0, m = 0, n = 0, nieuje = 0, najkol = 0, inajkol = 0, temp = 0;

    printf("Podaj rozmiar m tablicy = ");
    scanf("%i",&m);

    printf("\nPodaj rozmiar n tablicy = ");
    scanf("%i",&n);

    printf("\n\nPodaj elementy tej tablicy = ");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("\nx[%i][%i] = ",i,j);
            scanf("%i",&x[i][j]);
        }
    }

    printf("\n\nWpisana tablica = \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%5i",x[i][j]);
        }
        printf("\n");
    }

    for (j = 0; j < n; j ++) {
        for (i = 0; i < m; i++) {
            if (x[i][j] < 0 && x[i][j] % 2 != 0) {
                nieuje++;
            }
        }
        y[j] = nieuje;
        nieuje = 0;
    }

    printf("\nLiczba nieujemnych nieparzystych = \n");
    for (i = 0; i < n; i++) {
        printf("%5i",y[i]);
    }

    for (i = 0; i < n; i++) {
        if (y[i] > najkol) {
            najkol = y[i];
        }
    }

    for (i = 0; i < n; i++) {
        if (y[i] < najkol) {
            z[i] = 0;
        }
        else {
            z[i] = i;
        }
    }

    printf("\n\nNajwiecej takich liczb w kolumnie to %i, na pozycjach = \n", najkol);
    for (i = 0; i < n; i++) {
        if (z[i] != 0) {
            printf("%5i",z[i]+1);
        }
        else
            printf("     ");
    }
/*
    for (j = 0; j < n; j++) {
        for (k = 0; k < m; k++) {
            for (i = 0; i < m; i++) {
                if (x[i][j] < x[i+1][j]) {
                    temp = x[i][j];
                    x[i][j] = x[i+1][j];
                    x[i+1][j] = temp;
                }
            }
        }
    }

    printf("\n\nPosortowana kolumnowo tablica = \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%5i",x[i][j]);
        }
        printf("\n");
    }
**/
    return 0;
}
