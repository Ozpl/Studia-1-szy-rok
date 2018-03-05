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

void StworzKopieLancucha (char *t1, char *t2, int *n) {
    int i;
    *n = strlen(t1);
    for (i = 0; i < *n; i++) {
        *(t2+i) = *(t1+i);
    }
    *(t2+*n) = '\0';
    printf("\nDlugosc lancucha = %i\n",*n);
    WyswietlLancuch(t2);
    return;
}

int main()
{
    char x[81], y[81];
    int n;

    WprowadzLancuch(x);
    WyswietlLancuch(x);

    StworzKopieLancucha(x,y,&n);

    return 0;
}
