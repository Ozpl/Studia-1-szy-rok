#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x[10][10], i = 0, j = 0, m, n, a = 0, b = 80;
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

    return 0;
}
