#include <stdio.h>
#include <stdlib.h>
#include <math.h.>

#define EPS 1e-12

int main() {
    double x, s, w, n;
    printf("Wpisz x (|x|>1) = ");
    scanf("%lf",&x);
    s = 1 / x;
    w = x;
    n = 3;

    if (fabs(x) > 1) {
        while (fabs(w) > EPS) {
            w = 1 / (n*pow(x,n));
            s += w;
            n += 2;
        }
    }
    else {
        printf("Funkcja niezdefiniowana");
        return 0;
    }
    s *= 2;
    printf("\n\nx = %f",x);
    printf("\nSuma szeregu = %f",s);
    printf("\nln ((x+1)/(x-1)) = %f",log(((x+1)/(x-1))));
    return 0;
}
