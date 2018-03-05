#include <stdio.h>
#include <stdlib.h>
#include <math.h.>

#define EPS 1e-12

int main() {
    double x, s, w, n, silnia, m;
    printf("Wpisz x = ");
    scanf("%lf",&x);
    s = 1;
    w = x;
    n = 2;
    m = -1;
    silnia = n * (n-1);
    while (fabs(w) > EPS) {
        w = m * (pow(x,n)) / silnia;
        s += w;
        m *= -1;
        n += 2;
        silnia *= n * (n-1);
    }
    printf("\n\nx = %f",x);
    printf("\nSuma szeregu = %f",s);
    printf("\ncos x = %f",cos(x));
    return 0;
}
