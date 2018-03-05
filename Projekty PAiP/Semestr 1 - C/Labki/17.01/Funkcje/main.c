#include <stdio.h>
#include <stdlib.h>

int ZwrocDzielnikiLiczbyX (int x) {
    int s = 0, i;
    for (i = 1; i < x; i++) {
        if (x % i == 0) {
            s += i;
        }
    }
    return s;
}

int main()
{
    int x1, x2, s1, s2;
    printf("Wpisz x1 (x > 0) = ");
    scanf("%i",&x1);
    printf("Wpisz x2 (x > 0) = ");
    scanf("%i",&x2);

    s1 = ZwrocDzielnikiLiczbyX(x1);
    s2 = ZwrocDzielnikiLiczbyX(x2);

    printf("\n\nSuma dzielnikow liczby %i = %i",x1,s1);
    printf("\nSuma dzielnikow liczby %i = %i",x2,s2);
    if (x1 == s2 && x2 == s1) {
        printf("\nPodana para liczb jest zaprzyjazniona\n");
    }
    else
        printf("\nPodana para liczb nie jest zaprzyjazniona\n");

    return 0;
}
