#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n1 = 0, n2 = 0, i1 = 0, i2 = 0, zgod = 0, niezgod = -1;
    char x1[81], x2[81];

    printf("Wpisz pierwszy lancuch = ");
    gets(x1);
    printf("Pierwszy lancuch = ");
    puts(x1);

    printf("Wpisz drugi lancuch = ");
    gets(x2);
    printf("Drugi lancuch = ");
    puts(x2);

    n1 = strlen(x1);
    n2 = strlen(x2);

    for (i1=0; i1 < n1; i1++){
        if (x1[i1] == x2[i2]) {
            i2++;
            zgod++;
        }
        else {
            if (niezgod == -1) {
                niezgod = i1;
            }
            zgod = 0;
        }
    }

    if (zgod != 0) {
        printf("\n\nLancuchy sa jednakowe\n\n");
    }
    else {
        i1 = i2;
        printf("\n\nLancuchy nie zgadzaja sie na pozycji %i",niezgod+1);
        printf("\nZnak w pierwszym lancuchu = %c",x1[i1]);
        printf("\nZnak w drugim lancuchu = %c\n",x2[i2]);
    }

    return 0;
}
