// Wskaźniki zadanie 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void WczytajRozmiarIElementyTablicy(int *t1, int *n) {
	int i;
	printf("Wpisz rozmiar tablicy (n < 10) = ");
	scanf_s("%i", n);
	for (i = 0; i < *n; i++) {
		printf("x[%i] = ", i);
		scanf_s("%i", t1 + i);
	}
	return;
}

void WyswietlTablice(int const *t1, int n) {
	int i;
	printf("\nTablica =");
	for (i = 0; i < n; i++) {
		printf("\nx[%i] = %i", i, *(t1 + i));
	}
	return;
}

void WyswietlNajwiekszaINajmniejszaWartoscWTablicy(int *t1, int n, int *najwieksza, int *najmniejsza) {
	int i;
	*najwieksza = *t1;
	*najmniejsza = *t1;
	for (i = 0; i < n; i++) {
		if (*najwieksza < *(t1+i)) {
			*najwieksza = *(t1 + i);
		}
		if (*najmniejsza > *(t1 + i)) {
			*najmniejsza = *(t1 + i);
		}
	}
	printf("\n\nNajwieksza wartosc w tablicy = %i",*najwieksza);
	printf("\nNajmniejsza wartosc w tablicy = %i", *najmniejsza);
	return;
}

int main() {
	int x[10], n, najwieksza, najmniejsza;

	WczytajRozmiarIElementyTablicy(x, &n);

	WyswietlTablice(x, n);

	WyswietlNajwiekszaINajmniejszaWartoscWTablicy(x,n,&najwieksza,&najmniejsza);
	
	printf("\n\n");
	return 0;
}