#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EPS 1e-12

int main() {
    float x[7];
    int n = 7, i = 0;

    for (i = 0; i < n; i++) {
        printf("\nWprowadz x[%.0f] wyraz = ",i);
        scanf("%lf",&x[i]);
    }

    for (i = 0; i < n; i++) {
        if (x[i] > x[n]) {
            x[i] = x[n];
        }
    }
    printf("\n\nNajwiekszy x = %lf\n",x[n]);
    return 0;

}
