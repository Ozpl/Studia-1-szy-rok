#include <stdio.h>
#include <stdlib.h>

int main() {
    int x[10][10];
    int i = 0, j = 0, n = 0, suma = 0;

    printf("Podaj rozmiar tablicy kwadratowej = ");
    scanf("%i",&n);

    printf("\nWczytaj tablice = \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("x[%i][%i] = ",i,j);
            scanf("%i",&x[i][j]);
        }
    }

    printf("\n\nWczytana tablica = \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%5i",x[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i+j < n-1 && x[i][j] % 135 == 0) {
                suma += x[i][j];
            }
        }
    }

    printf("\n\nDzielniki liczby 135 lezace nad druga przekatna = \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i+j < n-1 && x[i][j] % 135 == 0) {
                printf("%5i",x[i][j]);
            }
            else
                printf("     ");
        }
        printf("\n");
    }

    printf("\n\nSuma dzielnikow liczby 135 lezacych nad druga przekatna = %i\n",suma);

    return 0;
}
