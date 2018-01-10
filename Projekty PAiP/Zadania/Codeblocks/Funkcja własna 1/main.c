#include <stdio.h>
#include <stdlib.h>

float ZwrocWiekszaWartosc (float a, float b) {
    float wieksza = 0;
    if (a >= b) wieksza = a;
    else wieksza = b;
    return wieksza;
}

int main() {
    float a = 0, b = 0, wieksza = 0;
    printf("Wpisz liczbe a = ");
    scanf("%f",&a);
    printf("\nWpisz liczbe b = ");
    scanf("%f",&b);

    wieksza = ZwrocWiekszaWartosc(a,b);

    printf("\n\nWieksza wartosc = %f",wieksza);

    return 0;
}
