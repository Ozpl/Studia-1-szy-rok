//1. Dane s¹ trzy ró¿ne liczby. Wyœwietliæ najwiêksz¹ z nich.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 10000;
    int y = 1000;
    int z = 100;
    printf("x = %d, y = %d, z = %d\n",x,y,z);

    if (x>y && x>z) {
        printf("Najwieksza jest x= %d\n",x);
    }
    else if (y>x && y>z) {
        printf("Najwieksza jest y= %d\n",y);
    }
    else if (z>x && z>y) {
        printf("Najwieksza jest z= %d\n",z);
    }
    return 0;
}
