//3. Dana jest liczba ca�kowita. Sprawdzi�, czy jest ona parzysta , nieparzysta , czy r�wna zero

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 10;
    printf("x = %d\n",x);

        if (x % 2)
            printf("\n%d jest nieparzysta",x);

        else if (x % 2 + 1 && x != 0)
            printf("\n%d jest parzysta",x);

        else {
            printf("\n%d jest zerem",x);
        }

    return 0;
}
