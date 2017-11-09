#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EPS 1e-12

int main() {
    double x,w,s,silnia,n;

    printf("\nPodaj x");
    scanf("%lf",&x) ;

    w=x;
    s=x;
    silnia=1;
    n=3;

    while (fabs(w)> EPS) {
     silnia*=n*(n-1);
     w *= -1 * (pow(x,n) / silnia);
     s += w;
     n+=2;
    }

    printf("\n\nx = %f",x);
    printf("\nSuma = %f",s);
    printf("\nFunkcja = %f",sin(x));
}
