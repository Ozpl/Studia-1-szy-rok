#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][20];
    int i,j,n,m;

    printf("\nIlosc wierszy:");
    scanf("%d",&n);
    printf("\nIlosc kolumn:");
    scanf("%d",&m);
    printf("\nPodaj %d liczb:\n",n*m);

    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            printf("a[%i][%i]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    puts("\nWczytana tablica:");
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            printf("\t%d",a[i][j]);
        }
        puts("\n");
    }

    int il=0,ilo=0;
    for(j=0; j<m; j++) {
        for(i=0; i<n; i++) {
            if(a[i][j]%5==0) {
                il++;
            }
        }

        if(il==n) {
            ilo++;
        }

        il = 0;
    }

    printf("\nIlosc kolumn =%d",ilo);
    return 0;
}
