//4. Sprawdzi�, czy wczytany z klawiatury znak jest liter�, cyfr� czy znakiem niealfanumerycznym.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char c;
    printf("Wpisz znak do sprawdzenia: \n");
    scanf("%c",&c);

    if (isdigit(c)) {
        printf("Wpisany znak jest cyfra\n");
    }

    else if (isalpha(c)) {
        printf("Wpisany znak jest litera\n");
    }

    else {
        printf("Wpisany znak jest znakiem niealfanumerycznym\n");
    }

    return 0;
}
