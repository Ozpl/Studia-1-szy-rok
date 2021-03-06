// Wskaźniki zadanie 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"

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
		*srednia += *(t1 + i);
	}
	*srednia /= n;

	*najwieksza = 0;
	for (i = 0; i < n; i++) {
		if (*najwieksza < fabs(*(t1+i)-*srednia)) {
			*najwieksza = fabs(*(t1 + i) - *srednia);
		}
	}

	*najmniejsza = *najwieksza;
	for (i = 0; i < n; i++) {
		if (*najmniejsza > fabs(*(t1 + i) - *srednia)) {
			*najmniejsza = fabs(*(t1 + i) - *srednia);
		}
	}
	printf("\n\nSrednia = %i", *srednia);
	printf("\nNajwieksza roznica pomiedzy srednia a poszczegolnymi elementami = %i", *najwieksza);
	printf("\nNajmniejsza roznica pomiedzy srednia a poszczegolnymi elementami = %i", *najmniejsza);
	return;
}

int main()
{
	int x[10], n, srednia = 0, najwieksza, najmniejsza;

	WczytajRozmiarIElementyTablicy(x, &n);

	WyswietlTablice(x, n);

	ObliczSredniaElementowOrazNajwiekszaINajmniejszaRozniceMiedzySredniaAElementami(x,n,&srednia,&najwieksza,&najmniejsza);

	printf("\n\n");
    return 0;
}