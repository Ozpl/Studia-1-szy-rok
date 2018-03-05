#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EPS 1e-12

int main() {
    double x, s, n, w, silnia, m;
    printf("Wpisz x = ");
    scanf("%lf",&x);
    w = x;
    s = 0;
    n = 3;
    silnia = n * (n-1);
    m = -1;
    while (fabs(w) > EPS) {
        s += w;
        w = m * (pow(x,n)) / silnia;
        m *= -1;
        n += 2;
        silnia *= n * (n-1);
    }
    printf("\n\nx = %f",x);
    printf("\nSuma szeregu = %f",s);
    printf("\nsin x = %f",sin(x));
    return 0;
}
