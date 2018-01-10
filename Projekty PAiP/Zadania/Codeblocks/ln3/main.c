#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EPS 1e-10

int main()
{
    float w, x, n = 1, s, licznik = 0, mianownik = 0, pot1, pot2;
    printf("Wprowadz x = ");
    scanf("%f",&x);
    x = 1.5;
    s = x - 1;
    w = x;
    pot1 = x - 1;
    pot2 = n + 1;
    if (x > 0 && x < 2) {
        while (fabs(w) > EPS) {
            s += w;
            licznik = pow(pot1,pot2);
            mianownik = n + 1;
            w = w * licznik / mianownik;
            n++;
            pot1++;
            pot2++;
        }
        printf("\n\nx = %f",x);
        printf("\nSuma szeregu = %f",s);
        printf("\nln(x) = %f\n",log(x));
    }
    else {
        printf("\n\nFunkcja niezdefiniowana\n");
    }
    return 0;
}
