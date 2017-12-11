#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x[10][10], i = 0, j = 0, k = 0, n, a = 0, b = 80, temp = 0;
    printf("Podaj rozmiar macierzy kwadratowej = ");
    scanf("%i",&n);
    srand(time(NULL));

    printf("\nLosowanie liczby z przedzialu <a,b> = <%i,%i>", a-30, b-30);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
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

    for (j = 0; j < n; j++) {
        for (k = 0; k < n; k++) {
            for (i = 0; i < n; i++) {
                if (x[i][j] > x[i+1][j]) {
                    temp = x[i][j];
                    x[i][j] = x[i+1][j];
                    x[i+1][j] = temp;
                }
            }
        }
    }

    printf("\n\nPosortowana kolumnowo tablica = \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%5i",x[i][j]);
        }
        printf("\n");
    }

    return 0;
}
