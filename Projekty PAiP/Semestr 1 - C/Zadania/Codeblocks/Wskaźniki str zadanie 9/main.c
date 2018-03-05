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

void PolaczDwaLancuchyIObliczDlugoscNowego(char *t1, char *t2, char *t3) {
    int i, j, n1 = strlen(t1), n2 = strlen(t2);
    for (i = 0; i < n1; i++) {
        *(t3+i) = *(t1+i);
    }
    for (j = 0; j < n2; j++) {
        *(t3+i) = *(t2+j);
        i++;
    }
    *(t3+n1+n2) = '\0';
    return;
}

int main()
{
    char x[81], y[81], z[162];
    int dlugosc;

    WprowadzLancuch(x);
    WprowadzLancuch(y);

    WyswietlLancuch(x);
    WyswietlLancuch(y);

    PolaczDwaLancuchyIObliczDlugoscNowego(x,y,z);
    WyswietlLancuch(z);

    return 0;
}
