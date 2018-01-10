#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EPS 1e-12

int main() {
    double x, n, s, w, silnia;
    printf("Wpisz x = ");
    scanf("%lf",&x);
    w = x;
    s = 1;
    n = 1;
    silnia = 1;
    while (fabs(w) > EPS) {
        w = (pow(x,n)) / silnia;
        s += w;
        n++;
        silnia *= n;
    }
    printf("\n\nx = %f",x);
    printf("\nSuma szeregu = %f",s);
    printf("\ne^x = %f",exp(x));
    return 0;
}
