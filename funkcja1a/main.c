/**
Obliczyæ wartoœæ funkcji:

[...]

Obliczyæ wartoœæ funkcji f(x) dla danego x rzeczywistego,
x nale¿y wczytaæ z klawiatury

x= -2.5 f(x)=-110.662819
x= -1.5 f(x) niezdefiniowana.
x= 0.5 f(x)=-0.010207
x= 1.5 f(x) niezdefiniowana.
x= 2.5 f(x)=0.424779
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, fx;
    printf("Wpisz x = \n");
    scanf("%f",&x);

    if (x < -2) {
        fx = ((3 * pow(x,5)) + (2 * x)) / (sqrt(pow(x,2) + 1));
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }

    else if (x > -1 && x <= 1) {
        fx = sin(x + 3) / ((5*pow(x,2)) + exp(x + 3));
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }
    else if (x > 2) {
        fx = (log(x+(2*x))) / (3 * sqrt(x));
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }
    else {
        printf("\nFunkcja niezdefiniowana\n");
    }
    return 0;
}
