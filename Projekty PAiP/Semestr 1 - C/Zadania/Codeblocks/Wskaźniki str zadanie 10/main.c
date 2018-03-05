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

void PorownajDwaLancuchyIPodajWynik (char *t1, char *t2, int *wynik, int *roznica) {
    int i, n = strlen(t1);
    *wynik = -1;
    *roznica = -1;
    for (i = 0; i < n; i++) {
        if (*(t1+i) != *(t2+i)) {
            *wynik = 0;
            *roznica = i+1;
            break;
        }
        *wynik = 1;
    }
    if (*wynik == 1) {
        printf("\n\nLancuchy sa takie same, wynik = 1");
    }
    else if (*wynik == 0) {
        printf("\n\nLancuchy nie sa takie same, wynik = 0, lancuchy roznia sie po raz pierwszy na pozycji %i",*roznica);
    }
    return;
}

int main()
{
    char x[81], y[81];
    int wynik, roznica;

    WprowadzLancuch(x);
    WprowadzLancuch(y);

    WyswietlLancuch(x);
    WyswietlLancuch(y);

    PorownajDwaLancuchyIPodajWynik(x,y,&wynik,&roznica);

    return 0;
}
