#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i1 = 0, i2 = 0, i3 = 0, n1 = 0, n2 = 0, n3 = 0;
    char x1[81], x2[81], x3[162];


    printf("Wpisz lancuch nr 1 = ");
    gets(x1);
    printf("Wpisz lancuch nr 2 = ");
    gets(x2);
    printf("\nWpisany lancuch nr 1 = ");
    puts(x1);
    printf("Wpisany lancuch nr 2 = ");
    puts(x2);

    n1 = strlen(x1);
    n2 = strlen(x2);
    n3 = n1 + n2;

    for (i3=0; i3 < n3; i3++) {
        if (i2 < n2) {
            if (i1 < n1) {
                x3[i3] = x1[i1];
                i1++;
            }
            else {
                x3[i3] = x2[i2];
                i2++;
            }
        }
    }

    printf("\n\nPolaczone dwa lancuchy = ");
    puts(x3);

    return 0;
}
