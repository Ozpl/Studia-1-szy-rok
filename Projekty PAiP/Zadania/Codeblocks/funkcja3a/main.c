/** \brief
Obliczyæ wartoœæ funkcji f(x) dla danego x rzeczywistego,
x nale¿y wczytaæ z klawiatury.

[...]

Wyœwietliæ :
x , f(x) ( lub informacjê, ¿e jest niezdefiniowana).
Wyniki :
x= -1.5 f(x)=0.199242
x= -1.0 f(x) niezdefiniowana.
x= 0.5 f(x)=0.503802
x= 2.0 f(x) niezdefiniowana.
x= 2.5 f(x)=0.703500
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
        fx = (sqrt(fabs(pow(x,2) + 3))) / ((2 * pow(x,2)) + 7);
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }

    else if (x >= 0 && x <= 1) {
        fx = (exp(-2*x) + (3*pow(x,5))) / (log(x+2));
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }
    else if (x > 2) {
        fx = (3*sin(x+5)) / ((2*x)-1);
        printf("\nx jest rowne: %f\nf(x) jest rowne: %f\n",x,fx);
    }
    else {
        printf("\nFunkcja niezdefiniowana\n");
    }
    return 0;
}
