#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f1 (float x) {
    float wynik = 0;
    wynik = exp(-x) - sin(x);
    return wynik;
}

void f2 (float a, float b, float n) {
    float i, h = 0, x;
    h = (a+b) / n;
    for (i = 0; i <= n; i++) {
        x = a + (i*h);
        printf("\nf(%1.1f) = %f",x,f1(x));
    }
    return;
}

int main()
{
    float x, wynikf1 = 0, wynikf2 = 0, i, a, b, n;

    printf("Wpisz x = ");
    scanf("%f",&x);

    printf("\nWpisz a = ");
    scanf("%f",&a);

    printf("\nWpisz b = ");
    scanf("%f",&b);

    printf("\nWpisz n = ");
    scanf("%f",&n);

    wynikf1 = f1(x);
    printf("\n\nWynik x = %f",wynikf1);

    f2(a,b,n);

    return 0;
}
