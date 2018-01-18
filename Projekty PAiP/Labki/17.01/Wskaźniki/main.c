#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void WczytajLancuch(char *s1) {
    printf("Wczytaj lancuch =\n");
    gets(s1);
    return;
}

void WyswietlLancuch(char *s1) {
    printf("\nWczytany lancuch =\n");
    puts(s1);
    return;
}

void PorownajDwaLancuchy(char *s1, char *s2, int *wynik, int *pozycja) {
    int i, n = strlen(s1);
    *wynik = -1;
    *pozycja = 0;
    for (i = 0; i < n; i++) {
        if (*(s1+i) != *(s2+i)) {
            *wynik = 0;
            *pozycja = i + 1;
            break;
        }
        *wynik = 1;
    }
    return;
}

int main()
{
    char x[81], y[81];
    int wynik, pozycja;

    WczytajLancuch(x);
    WczytajLancuch(y);

    WyswietlLancuch(x);
    WyswietlLancuch(y);

    PorownajDwaLancuchy(x,y,&wynik,&pozycja);

    if (wynik == 1) {
        printf("\nWynik = 1, lancuchy sa takie same\n");
    }
    else if (wynik == 0) {
        printf("\nWynik = 0, lancuchy nie sa takie same\nPo raz pierwszy roznia sie na %i pozycji\n",pozycja);
    }

    return 0;
}
