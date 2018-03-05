/** \brief
Obliczyæ wartoœæ funkcji f(x) dla danego x rzeczywistego,
x nale¿y wczytaæ z klawiatury.

[...]

Wyœwietliæ :
x , f(x) ( lub informacjê, ¿e jest niezdefiniowana).
Wyniki :
x= -1.5 f(x)=0.638561
x= -1.0 f(x) niezdefiniowana.
x= 0.5 f(x)=0.259677
x= 1.0 f(x) niezdefiniowana.
x= 3.5 f(x)=69.618294
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
        fx = (cos(3 * x) + 5) / (3*(x+4));
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }

    else if (x >= 0 && x < 1) {
        fx = (log((2*x) + 1)) / sqrt(pow(x,3) + 7);
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }
    else if (x >= 3) {
        fx = ((x * exp(x-1)) + exp(x)) / (2 * log10(x));
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }
    else {
        printf("\nFunkcja niezdefiniowana\n");
    }
    return 0;
}
