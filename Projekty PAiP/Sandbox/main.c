#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x[10][10], y[10], z[10];
    int i = 0, j = 0, m = 0, n = 0, nieuje = 0, najkol = 0, inajkol = 0, a = 0, b = 80;

    printf("Podaj rozmiar m macierzy kwadratowej = ");
    scanf("%i",&m);
    printf("Podaj rozmiar n macierzy kwadratowej = ");
    scanf("%i",&n);
    srand(time(NULL));

    printf("\nLosowanie liczby z przedzialu <a,b> = <%i,%i>", a-30, b-30);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            x[i][j]=rand()%(b-a+1)-30;
        }
    }

    printf("\n\nPodana tablica = \n");
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

    return 0;
}
