#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define S_MAX 100

int main()
{
    float n = 2, s = 0.5, w = 0;
    while (s < S_MAX) {
        w = (pow(n,2)) / (n + 1);
        s += w;
        n++;
    }
    printf("Suma ciagu = %.4f",s);
    printf("\nLiczba wyrazow = %.0f",n);
    return 0;
}
