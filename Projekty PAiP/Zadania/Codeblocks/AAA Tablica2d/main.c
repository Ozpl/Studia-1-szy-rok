#include <stdio.h>
#include <stdlib.h>

int main() {
    int x[10][10];
    int i = 0, j = 0, m = 0, n = 0;

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

    return 0;
}
