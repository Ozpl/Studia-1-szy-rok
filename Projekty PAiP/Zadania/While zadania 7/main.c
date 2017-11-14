#include <stdio.h>
#include <stdlib.h>
#include <math.h.>

#define EPS 1e-12

int main() {
    double x, s, w, n;
    printf("Wpisz x (x>0) = ");
    scanf("%lf",&x);
    s = (x - 1) / (x + 1);
    w = x;
    n = 3;

    if (x > 0) {
        while (fabs(w) > EPS) {
            w = (pow(x-1,n)) / (n*pow(x+1,n));
            s += w;
            n +=2;
        }
    }
    else {
        printf("Funkcja niezdefiniowana");
        return 0;
    }
    s *= 2;
    printf("\n\nx = %f",x);
    printf("\nSuma szeregu = %f",s);
    printf("\nln x = %f",log(x));
    return 0;
}
