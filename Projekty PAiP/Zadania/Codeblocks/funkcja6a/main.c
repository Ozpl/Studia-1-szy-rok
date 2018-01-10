/**
Obliczyæ wartoœæ funkcji f(x) dla danego x rzeczywistego,
x nale¿y wczytaæ z klawiatury.

[...]

Wyœwietliæ :
x , f(x) ( lub informacjê, ¿e jest niezdefiniowana).
Wyniki:
x= -2.5 f(x)=0.464238
x= -2.0 f(x) niezdefiniowana.
x= 1.5 f(x)=0.854515
x= 3.5 f(x) niezdefiniowana.
x= 4.5 f(x)=42.697063
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
        fx = (pow(x,2) + (2 * x)) / (sqrt(pow(x,2) + 1));
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }

    else if (x > 0 && x <= 3) {
        fx = (log(3*x+1)) / (2*sin(x));
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }
    else if (x > 4) {
        fx = (exp(x+2) + 2) / (pow((x-2),3));
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }
    else {
        printf("\nFunkcja niezdefiniowana\n");
    }
    return 0;
}
