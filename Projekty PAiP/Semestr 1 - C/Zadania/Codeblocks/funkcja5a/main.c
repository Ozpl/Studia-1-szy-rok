/**
Obliczyæ wartoœæ funkcji f(x) dla danego x rzeczywistego,
x nale¿y wczytaæ z klawiatury.

[...]

Wyœwietliæ :
x , f(x) ( lub informacjê, ¿e jest niezdefiniowana).
Wyniki:
x= -1.5 f(x)=0.676798
x= -1.0 f(x) niezdefiniowana.
x= 1.5 f(x)=0.244768
x= 3.0 f(x) niezdefiniowana.
x= 3.5 f(x)=0.000085
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, fx;
    printf("Wpisz x = \n");
    scanf("%f",&x);

    if (x < -1) {
        fx = (sin(x) + 2) / (cbrt(pow(x,2) + 1));
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }

    else if (x >= 0 && x <= 2) {
        fx = (log(1+x) + 3) / (4*(2*x+1));
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }
    else if (x > 3) {
        fx = (8*pow(x,-5)) / (2*exp(x+1));
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }
    else {
        printf("\nFunkcja niezdefiniowana\n");
    }
    return 0;
}
