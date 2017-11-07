#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EPS 1e-12

int main()
{
    double x, s, w;
    int n;
    printf("Wprowadz x: ");
    scanf("%lf",&x);
    s = 1;
    w = x;
    n = 2;
    while (fabs(w)>EPS) {
        s += w;
        w = w*(x/n);
        n++;
    }
    printf("\n\nx = %f",x);
    printf("\nSuma szeregu = %.12f",s);
    printf("\nexp(x) = %.12f\n",exp(x));
    return 0;
}
