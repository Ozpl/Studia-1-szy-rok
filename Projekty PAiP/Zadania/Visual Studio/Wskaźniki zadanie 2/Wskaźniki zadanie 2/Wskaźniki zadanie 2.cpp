// Wskaźniki zadanie 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void WczytajRozmiarIElementyTablicy (int *t1, int *n) {
	int i;
	printf("Podaj rozmiar tablicy = ");
	scanf_s("%i", n);
	for (i = 0; i < *n; i++) {
		printf("x[%i] = ", i);
		scanf_s("%i", t1 + i);
	}
	return;
}

void WyswietlTablice (int const *t1, int n) {
	int i;
	printf("\nTablica = ");
	for (i = 0; i < n; i++) {
		printf("\nx[%i] = %i", i, *(t1 + i));
	}
	return;
}

void ObliczSredniaElementowOrazNajwiekszaINajmniejszaRozniceMiedzySredniaAElementami (int *t1, int n, int * srednia, int *najwieksza, int *najmniejsza) {
	int i;
	for (i = 0; i < n; i++) {
		srednia += *(t1 + i);
	}
	*srednia /= n;
	for (i = 0; i < n; i++) {
		if () {

		}
	}
	return;
}

int main()
{
	int x[10], n, srednia = 0, najwieksza, najmniejsza;

	WczytajRozmiarIElementyTablicy(x, &n);

	WyswietlTablice(x, n);

	najwieksza = x[0];
	najmniejsza = x[0];
	ObliczSredniaElementowOrazNajwiekszaINajmniejszaRozniceMiedzySredniaAElementami(x,n,&srednia,&najwieksza,&najmniejsza);

    return 0;
}