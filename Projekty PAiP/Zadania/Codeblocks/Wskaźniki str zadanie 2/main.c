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

void PoliczAsteriskiPlusyIBackslashe(char *t1, int *asterisk, int *plus, int *backslash) {
    int i, n = strlen(t1);
    *asterisk = 0;
    *plus = 0;
    *backslash = 0;
    for (i = 0; i < n; i++) {
        switch (*(t1+i)) {
        case '*':
            *asterisk += 1;
            break;
        case '+':
            *plus += 1;
            break;
        case '\\':
            *backslash += 1;
            break;
        }
    }
    printf("\n\nLiczba asteriskow = %i",*asterisk);
    printf("\nLiczba plusow = %i",*plus);
    printf("\nLiczba backslashy = %i\n",*backslash);
    return;
}

int main()
{
    char x[81];
    int asterisk, plus, backslash;

    WprowadzLancuch(x);
    WyswietlLancuch(x);

    PoliczAsteriskiPlusyIBackslashe(x,&asterisk,&plus,&backslash);

    return 0;
}
