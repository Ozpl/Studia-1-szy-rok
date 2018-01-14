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

void PoliczLiteryCyfryIZnakiNiealfanumeryczne(char *t1, int *litery, int *cyfry, int *niealfa) {
    int i, n = strlen(t1);
    *litery = 0;
    *cyfry = 0;
    *niealfa = 0;
    for (i = 0; i < n; i++) {
        if (*(t1+i) >= 'A' && *(t1+i) <= 'Z' || *(t1+i) >= 'a' && *(t1+i) <= 'z') {
            *litery += 1;
        }
        else if (*(t1+i) >= '0' && *(t1+i) <= '9') {
            *cyfry += 1;
        }
        else {
            *niealfa += 1;
        }
    }
    printf("\n\nLiczba liter = %i",*litery);
    printf("\nLiczba cyfr = %i",*cyfry);
    printf("\nLiczba znakow niealfanumerycznych = %i\n",*niealfa);
    return;
}

int main()
{
    char x[81];
    int litery, cyfry, niealfa;

    WprowadzLancuch(x);

    WyswietlLancuch(x);

    PoliczLiteryCyfryIZnakiNiealfanumeryczne(x,&litery,&cyfry,&niealfa);

    return 0;
}
