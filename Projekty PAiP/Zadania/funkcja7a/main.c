/**
Obliczyæ wartoœæ funkcji f(x) dla danego x rzeczywistego,
x nale¿y wczytaæ z klawiatury.

[...]

Wyœwietliæ :
x , f(x) ( lub informacjê, ¿e jest niezdefiniowana).
Wyniki :
x= -1.5 f(x)=0.169107
x= -1.0 f(x) niezdefiniowana.
x= 1.5 f(x)=0.470982
x= 3.0 f(x) niezdefiniowana.
x= 3.5 f(x)=2.477202
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
        fx = (1+(2*cos(x))) / (3*pow(x,2));
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }

    else if (x >= 0 && x <= 2) {
        fx = (log(1+x) + (3*x)) / (7*x+1);
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }
    else if (x > 3) {
        fx = (3*log(2*x+1)) / (1+cbrt(x));
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }
    else {
        printf("\nFunkcja niezdefiniowana\n");
    }
    return 0;
}
