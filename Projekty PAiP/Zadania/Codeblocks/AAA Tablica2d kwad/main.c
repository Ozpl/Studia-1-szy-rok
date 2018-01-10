#include <stdio.h>
#include <stdlib.h>

int main() {
    int x[10][10];
    int i = 0, j = 0, n = 0;

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

    return 0;
}
