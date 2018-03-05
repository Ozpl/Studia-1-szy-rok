#include <stdio.h>
#include <stdlib.h>

int main() {
    float x[20];
    int i, n;
    printf("Podaj rozmiar tablicy n<= 20: ");
    scanf("%i",&n);
    printf("Podaj %i liczb: \n",n);
    for (i=0;i<n;i++) {
        printf("\nx[%i] = ",i);
        scanf("%f",&x[i]);
    }
    printf("\nWczytano tablice: \n");
    for (i=0;i<n;i++) {
        printf("\nx[%i] = %.1f",i,x[i]);
    }

    //suma wszystkich
    float suma = 0;
    for (i = 0;i<n;i++) {

        if (x[i] < 0) {
            suma += x[i];
        }
    }
    printf("\n\nSuma wszystkich elementow: %.0f\n",suma);
    return 0;
}
