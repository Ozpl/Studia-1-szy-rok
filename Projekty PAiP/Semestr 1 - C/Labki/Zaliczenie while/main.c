#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EPS 1e-12
int main() {
    double a, x, w, s, n, silnia,licznik;
    printf("Podaj a = ");
    scanf("%lf",&a);
    printf("Podaj x = ");
    scanf("%lf",&x);
    w = x;
    s = 1;
    n = 1;
    silnia = 1;
    licznik = x * log(a);

    while (fabs(w) > EPS) {
        w = licznik / silnia;
        s += w;
        silnia *= n;
        n++;
        licznik = pow(licznik,n);
    }

    printf("\n\na = %f",a);
    printf("\nx = %f",x);
    printf("\nSuma szeregu = %.12f",s);
    printf("\nFunkcja a^x = %.12f\n",pow(a,x));
    return 0;
}
