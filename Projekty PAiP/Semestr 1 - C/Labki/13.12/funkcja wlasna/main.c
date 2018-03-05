#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float PoliczModulLiczbyZespolonej (float a, float b) {
    float mod;
    mod = pow(a,2) + pow(b,2);
    mod = sqrt(mod);
    return mod;
}

int main()
{
    float re = 0, im = 0, mod = 0, mod2 = 0;
    printf("Wpisz czesc rzeczywista liczby zespolonej = ");
    scanf("%f",&re);
    printf("\nWpisz czesc urojona lcizby zespolonej = ");
    scanf("%f",&im);

    mod = PoliczModulLiczbyZespolonej(re,im);
    mod2 = PoliczModulLiczbyZespolonej(re+2,im+1);
    printf("\n\nModul liczby zespolonej %.1f + %.1fi = %.1f",re,im,mod);
    printf("\n\nModul liczby zespolonej %.1f + %.1fi = %.1f",re+2,im+1,mod2);
    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float ObliczOdlegloscPunktow(float x1, float y1, float x2, float y2) {
    float odleglosc = 0, bok1 = 0, bok2 = 0;
    bok1 = fabs(x2 - x1);
    bok2 = fabs(y2 - y1);
    odleglosc = pow(bok1,2) + pow(bok2,2);
    odleglosc = sqrt(odleglosc);
    return odleglosc;

}

int main()
{
    float x1 = 0, y1 = 0, x2 = 0, y2 = 0, odleglosc = 0, odlegloscP1 = 0, odlegloscP2 = 0;
    printf("Wpisz wspolrzedna x dla P1 = ");
    scanf("%f",&x1);
    printf("\nWpisz wspolrzedna y dla P1 = ");
    scanf("%f",&y1);
    printf("\nWpisz wspolrzedna x dla P2 = ");
    scanf("%f",&x2);
    printf("\nWpisz wspolrzedna y dla P2 = ");
    scanf("%f",&y2);

    odleglosc = ObliczOdlegloscPunktow(x1,y1,x2,y2);
    odlegloscP1 = ObliczOdlegloscPunktow(x1,y1,0,0);
    odlegloscP2 = ObliczOdlegloscPunktow(0,0,x2,y2);
    printf("\n\nOdleglosc miedzy punktami = %f",odleglosc);
    printf("\nOdleglosc miedzy P1 a P0 = %f",odlegloscP1);
    printf("\nOdleglosc miedzy P2 a P0 = %f\n",odlegloscP2);

    return 0;
}
**/
