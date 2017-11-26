#include <stdio.h>
#include <string.h>

int main()
{
    char str[81], hashpoz[81], hex[81];
    int i = 0, imax, hash = 0, spac = 0, j = 0, jmax = 0;
    printf("Wpisz lancuch = \n");
    gets(str);
    imax = strlen(str);
    printf("\nPozycje hasha: ");

    for (i = 0; i < imax; i++) {
        if (str[i] == '#') {
            hash++;
            printf("\n%i",i);
        }
    }
    printf("\nLiczba hashow = %i", hash);

    printf("\n\nDlugosc lancucha = %i",imax);
    printf("\nLancuch = \n");

    for (i = 0; i < imax; i++) {
        printf("str[%i] = kod ascii: %i    znak: %c\n",i,str[i],str[i]);
    }

    for (i = 0; i < imax; i++) {
        if (str[i] >= '0' && str[i] <= '9' || str[i] >= 'A' && str[i] <= 'F' || str[i] >= 'a' && str[i] <= 'f') {
            hex[i] = str[i];
        }
        else {
            hex[i] = 0;
        }
    }

    printf("\n\nCyfry szesnastkowe = \n");

    for (i = 0; i < imax; i++) {
        printf("hex[%i] = kod ascii: %i    znak: %c\n",i,hex[i],hex[i]);
    }

    for (i = 0; i < imax; i++) {
        if (str[i] == ' ') {
            spac++;
        }
    }
    printf("\n\nIlosc spacji = %i",spac);
    for (i = 0; i < imax; i++) {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }
    jmax = j;
    str[j] = '\0';

    printf("\nLancuch bez spacji:\n");
    for (j = 0; j < jmax; j++) {
        printf("str[%i] = kod ascii: %i    znak: %c\n",j,str[j],str[j]);
    }

    return 0;
}
