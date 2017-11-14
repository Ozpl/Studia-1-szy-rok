#include <stdio.h>
#include <stdlib.h>
#include <math.h.>

#define EPS 1e-12

int main() {
    double x, s, w, n, silnia, a;
    printf("Wpisz x = ");
    scanf("%lf",&x);
    printf("Wpisz a = ");
    scanf("%lf",&a);
    s = 1;
    w = x;
    n = 1;
    silnia = 1;
    while (fabs(w) > EPS) {
        w = pow((x*log(a)),n) / silnia;
        s += w;
        n++;
        silnia *= n;
    }
    printf("\n\nx = %f",x);
    printf("\nSuma szeregu = %f",s);
    printf("\na^x = %f",pow(a,x));
    return 0;
}
