//2. Dane s¹ trzy ró¿ne liczby. Wyœwietliæ je w kolejnoœci rosn¹cej.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int y = 1;
    int z = 100;
    printf("x = %d, y = %d, z = %d\n",x,y,z);

    if (x > y && y > z && x > z) {
        printf("Kolejnosc rosnaco = z(%d), y(%d), x(%d)",z,y,x);
    }

    else if (x > y && y < z && x > z) {
        printf("Kolejnosc rosnaco = y(%d), z(%d), x(%d)",y,z,x);
    }

    else if (x > y && y < z && x < z) {
        printf("Kolejnosc rosnaco = y(%d), x(%d), z(%d)",y,x,z);
    }

    else if (x < y && y < z && x < z) {
        printf("Kolejnosc rosnaco = x(%d), y(%d), z(%d)",x,y,z);
    }

    else if (x < y && y > z && x > z) {
        printf("Kolejnosc rosnaco = z(%d), x(%d), y(%d)",z,x,y);
    }

    else if (x < y && y > z && x < z) {
        printf("Kolejnosc rosnaco = x(%d), z(%d), y(%d)",x,z,y);
    }
}
