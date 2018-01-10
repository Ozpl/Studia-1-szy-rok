#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define  EPS 1e-12

int main() {
    double w, s, x, n, m;
    printf("Wpisz x (|x| < 1) = ");
    scanf("%lf",&x);
    w = x;
    s = 0;
    n = 3;
    m = -1;

    if (x <= 1) {
        while (fabs(w) > EPS) {
            s += w;
            w = m * (pow(x,n)) / (n);
            m *= -1;
            n += 2;
        }
    }
    else {
        printf("\n\nFunckja niezdefiniowana\n\n");
        return 0;
    }

    printf("\n\nx = %f",x);
    printf("\nSuma szeregu = %f",s);
    printf("\narc tg x = %f",atan(x));
    return 0;
}
