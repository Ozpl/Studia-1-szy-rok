#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char x1[81], x2[81], x3[81];
    int i1 = 0, i2 = 0, n = 0, n1 = 0, n2 = 0, pierwszy = -1;
    printf("Wpisz pierwszy lancuch = ");
    gets(x1);
    printf("Wpisz drugi lancuch = ");
    gets(x2);

    n1 = strlen(x1);
    n2 = strlen(x2);
    if (n1 > n2) {
        n = n1;
    }
    else {
        n = n2;
    }

    puts(x1);
    puts(x2);

    for (i1 = 0; i1 < n; i1++) {
        if (pierwszy == -1 && x1[i1] >= 'A' && x1[i1] <= 'Z' || x1[i1] >= 'a' && x1[i1] <= 'z') {
            x3[i2] = x1[i1];
            i2++;
        }
        if (i1 == n-1 && pierwszy == -1) {
            pierwszy++;
            i1 = 0;
        }
        if (x2[i1] >= '0' && x2[i1] <= '9' && pierwszy == 0) {
            x3[i2] = x2[i1];
            i2++;
        }
    }
    x3[i2] = '\0';

    printf("Trzeci lancuch = \n");
    puts(x3);

    return 0;
}
