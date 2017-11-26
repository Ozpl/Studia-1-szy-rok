#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float x[20], w = 0, s = 0, stand = 0, sr = 0, min = 0, max = 0, imin = 0, imax = 0;
    int i, n;
    printf("Podaj rozmiar tablicy n<= 20: ");
    scanf("%i",&n);
    printf("Podaj %i liczb: \n",n);
    for (i = 0; i < n; i++) {
        printf("\nx[%i] = ",i);
        scanf("%f",&x[i]);
    }
    printf("\nWczytano tablice: \n");
    for (i = 0; i < n; i++) {
        printf("\nx[%i] = %.1f",i,x[i]);
    }

    for (i = 0; i < n; i++) {
        sr += x[i];
    }
    sr /= n;

    for (i = 0; i < n; i++) {
        w = (x[i] - sr) * (x[i] - sr);
        s += w;
    }

    for (i=0; i < n; i++) {
            if (x[i] < x[i+1] && x[i] < min) {
                min = x[i];
                imin = i;
            }
    }

        for (i=0; i < n; i++) {
            if (x[i] > x[i+1] && x[i] > max) {
                max = x[i];
                imax = i;
            }
    }

    stand = sqrt(s/n);
    printf("\n\nSrednia = %.1f",sr);
    printf("\nOdchylenie standardowe = %f\n",stand);
    printf("\nMin = %f\nPozycja w tablicy = %.0f",min,imin+1);
    printf("\n\nMax = %f\nPozycja w tablicy = %.0f",max,imax+1);
    return 0;
}
