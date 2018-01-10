/**
2. Dana jest liczba zespolona. Obliczyæ jej modu³.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,z;
    printf("Liczba zespolona |z| = a + bi");
    printf("\nWpisz a = ");
    scanf("%d",&a);
    printf("Wpisz b = ");
    scanf("%d",&b);

    z = sqrt(pow(a,2) + pow(b,2));

    printf("\nModul wynosi %d\n\n",z);

    return 0;
}
