/**
Obliczyæ wartoœæ funkcji f(x) dla danego x rzeczywistego,
x nale¿y wczytaæ z klawiatury.

[...]

Wyœwietliæ :
x , f(x) ( lub informacjê, ¿e jest niezdefiniowana).
Wyniki:
x= -3.5 f(x)=0.469191
x= -3.0 f(x) niezdefiniowana.
x= -0.5 f(x)=-0.282807
x= 5.0 f(x) niezdefiniowana.
x= 5.5 f(x)=0.001629
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, fx;
    printf("Wpisz x = \n");
    scanf("%f",&x);

    if (x < -3) {
        fx = (log(fabs(x)) + exp(-x)) / (pow((5-x),2) + 1);
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }

    else if (x >= -1 && x <= 1) {
        fx = (sin(2*x)+x) / (3*(sqrt(2-x)));
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }
    else if (x > 5) {
        fx = (log10(x+1)) / (3*pow(x,3));
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }
    else {
        printf("\nFunkcja niezdefiniowana\n");
    }
    return 0;
}
