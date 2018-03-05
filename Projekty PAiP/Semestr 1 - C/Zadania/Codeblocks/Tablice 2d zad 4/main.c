#include <stdio.h>
#include <stdlib.h>

int main() {
    int x[10][10];
    int i = 0, j = 0, m = 0, n = 0, liczzer, najw = 0;

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

    liczzer = m;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (x[i][j] != 0) {
                liczzer--;
                break;
            }
        }
    }

    printf("\nLiczba wierszy z samymi elementami zerowymi = %i",liczzer);

    najw = x[m-1][0];
    for (j = 0; j < n; j++) {
        if (x[m-1][j] > najw) {
            najw = x[m-1][j];
        }
    }

    printf("\n\nNajwieksza wartosc w ostatnim wierszu = %i",najw);

    return 0;
}
