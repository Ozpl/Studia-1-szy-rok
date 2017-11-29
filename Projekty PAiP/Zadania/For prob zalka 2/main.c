#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i = 0, n = 0, kotpoz = 0, kotlic = 0;
    char x[81];
    printf("Wpisz lancuch = ");
    gets(x);
    printf("\n\nWpisany lancuch = ");
    puts(x);
    n = strlen(x);

    for (i=0; i<n; i++) {
        if (x[i] == 'k' || x[i] == 'K') {
            if (x[i+1] == 'o' || x[i+1] == 'O') {
                if (x[i+2] == 't' || x[i+2] == 'T') {
                    kotlic++;
                    if (kotpoz == 0) {
                        kotpoz = i + 1;
                    }
                }
            }
        }
    }

    printf("\n\nPozycja pierwszego kot = %i    Liczba kot = %i",kotpoz, kotlic);

    return 0;
}
