#include <stdio.h>
#include <stdlib.h>

void WczytajRozmiarIElementyTablicy (int *p1, int *p2) {
    int i;
    printf("Podaj ilosc elementow (n < 10) = ");
    scanf("%i",p2);
    for (i = 0; i < *p2; i++) {
        printf("tab[%i] = ",i);
        scanf("%i",p1+i);
    }
    printf("\n");
}

void WyswietlTablice (int const *p1, int n) {
    int i;
    printf("\n\nTablica = ");
    for (i=0; i < n; i++) {
        printf("\ntab[%i] = %i",i,*(p1+i));
    }
    printf("\n");
}

void PolaczDwieTablice (int *p1, int p2, int *p3, int p4, int *p5) {
    int i, j;
    for (i=0; i < p2; i++) {
        *(p5+i) = *(p1+i);
    }
    for (j=0; j < p4; j++) {
        *(p5+i+j) = *(p3+j);
    }
}

int main()
{
    int n1, n2, i = 0, x[10], y[10], z[20];

    WczytajRozmiarIElementyTablicy(x,&n1);
    WczytajRozmiarIElementyTablicy(y,&n2);

    WyswietlTablice(x,n1);
    WyswietlTablice(y,n2);

    PolaczDwieTablice(x,n1,y,n2,z);
    WyswietlTablice(z,n1 + n2);

    return 0;
}
