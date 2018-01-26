#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void WprowadzLancuch(char *t1) {
    printf("Wprowadz lancuch = ");
    gets(t1);
    return;
}

void WyswietlLancuch(char *t1) {
    printf("\nWyswietlony lancuch =\n");
    puts(t1);
    return;
}

void PorownajDwaLancuchy (char *s1, char *s2, int *wynik, int *poz) {
    int i, n = strlen(s1);
    *wynik = -1;
    *poz = 0;
    for (i=0; i < n; i++) {
        if (*(s1+i) != *(s2+i)) {
            *wynik = 0;
            *poz = i+1;
            break;
        }
        *wynik = 1;
    }
    if (*wynik == 1) {
        printf("\n\nWynik = %i\nLancuchy sa takie same\n",*wynik);
    }
    else
        printf("\n\nWynik = %i\nLancuchy roznia sie po raz pierwszy na pozycji %i\n",*wynik,*poz);
    return;
}

int main()
{
    char x[81], y[81];
    int wynik, poz;

    WprowadzLancuch(x);
    WprowadzLancuch(y);

    WyswietlLancuch(x);
    WyswietlLancuch(y);

    PorownajDwaLancuchy(x,y,&wynik,&poz);

    return 0;
}
