#include <stdio.h>
#include <stdlib.h>

int main() {
    int x[10][10], y[10];
    int i = 0, j = 0, k = 0, m = 0, n = 0, suma = 0, naj = 0, najw = 0, temp = 0;

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

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (x[i][j] > 20) {
                suma += x[i][j];
            }

            if (j == n-1) {
                y[k] = suma;
                k++;
            }
        }
        suma = 0;
    }

    printf("\n\nSuma elementow wiekszych od 20 = \n");
    for (k = 0; k < m; k++) {
            printf("%5i\n",y[k]);
    }


    naj = y[0];

    for (k = 0; k < m; k++) {
        if (y[k] > naj) {
            naj = y[k];
            najw = k;
        }
    }

    printf("\n\nNajwieksza suma to %i w wierszu %i",naj,najw+1);

    for (j = 0; j < n; j++) {
        for (k = 0; k < m; k++) {
            for (i = 0; i < m; i++) {
                if (x[i][j] > x[i+1][j]) {
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

    return 0;
}
