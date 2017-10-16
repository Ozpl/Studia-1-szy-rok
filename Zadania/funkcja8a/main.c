/**
Obliczyæ wartoœæ funkcji f(x) dla danego x rzeczywistego,
x nale¿y wczytaæ z klawiatury.

[...]

Wyœwietliæ :
x , f(x) ( lub informacjê, ¿e jest niezdefiniowana).
Wyniki:
x= -2.5 f(x)=0.271283
x= -2.0 f(x) niezdefiniowana.
x= -0.5 f(x)=-0.431136
x= 0.0 f(x) niezdefiniowana.
x= 2.0 f(x)=2.347925
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
        fx = (sqrt(fabs(x+2))) / (2+exp(x+2));
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }

    else if (x > -1 && x < 0) {
        fx = (1+log10(x+2)) / (3*sin(4*x));
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }
    else if (x >= 2) {
        fx = (x+log(2*x)) / (cbrt(x+1));
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }
    else {
        printf("\nFunkcja niezdefiniowana\n");
    }
    return 0;
}
