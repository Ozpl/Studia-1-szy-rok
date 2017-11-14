#include <stdio.h>
#include <stdlib.h>
#include <math.h.>

#define EPS 1e-12

int main() {
    double x, s, w, n, m;
    printf("Wpisz x (0<x<2) = ");
    scanf("%lf",&x);
    s = (x-1) / 1;
    w = x;
    n = 2;
    m = -1;

    if (x > 0 && x < 2) {
        while (fabs(w) > EPS) {
            w = m * (pow(x-1,n)) / n;
            s += w;
            n++;
            m *= -1;
        }
    }
    else {
        printf("Funkcja niezdefiniowana");
        return 0;
    }

    printf("\n\nx = %f",x);
    printf("\nSuma szeregu = %f",s);
    printf("\nln x = %f",log(x));
    return 0;
}
