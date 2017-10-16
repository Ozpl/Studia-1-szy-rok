#include <stdio.h>
#include <math.h>


int main()
{
    int a;
    printf("Wprowadz liczbe zapisana binarnie: ");
    scanf("%d", &a);      //nadaje wartosc a
    printf("\n%d w binarnym = %d w decymalnym", a, BinToDec(a));
    return 0;
}

int BinToDec(int a)
{
    int decymalny = 0, b = 0, reszta;
    while (a!=0)
    {
        printf("\n%d - b (potega)", b);        //debug
        reszta = a%10;
        printf("\n%d - reszta (czy jest reszta?)", reszta);        //debug
        a = a / 10;
        printf("\n%d - a (przesuwamy sie od prawej do lewej)", a);        //debug
        decymalny = decymalny + reszta*pow(2,b);
        printf("\n%d - decymalny (ile wynosi obecnie liczba w decymalnym)\n\n", decymalny);        //debug
        b++;
    }
    return decymalny;
}
