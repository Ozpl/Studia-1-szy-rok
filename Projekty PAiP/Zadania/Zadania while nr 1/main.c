#include <stdio.h>
#include <stdlib.h>

int main() {
    float x, y = 1;
    printf("Wpisz pierwsza liczbe (rozna od zera): ");
    scanf("%f",&x);

    while (y != 0) {
        float pamiec;
        pamiec = x;
        printf("\nWpisz nastepna liczbe: ");
        scanf("%f",&y);
        x = pamiec + y;
        printf("\n%f + %f = %f\n\n",pamiec,y,x);
    }
    printf("\n\nSuma wszystkich dotychczasowych liczb to: %f\n",x);
    return 0;
}
