#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void PorownajDwaLancuchy (char *s1, char *s2, int *wynik, int *poz) {
    int i, n = strlen(s1);
    for (i=0; i < n; i++) {
        if (*(s1+i) != *(s2+i)) {
            *wynik = 0;
            *poz = i+1;
            break;
        }
        *wynik = 1;
    }
    return;
}

int main()
{
    char x[81], y[81];
    int wynik = -1, poz = 0;
    printf("Pierwszy lancuch = ");
    gets(x);
    printf("Drugi lancuch tej samej dlugosci = ");
    gets(y);
    printf("\n\n");
    puts(x);
    puts(y);

    PorownajDwaLancuchy(x,y,&wynik,&poz);
    if (wynik == 1) {
        printf("\n\nWynik = %i\nLancuchy sa takie same\n",wynik);
    }
    else
        printf("\n\nWynik = %i\nLancuchy roznia sie po raz pierwszy na pozycji %i\n",wynik,poz);

    return 0;
}
