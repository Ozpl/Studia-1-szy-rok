// AAA Funkcja WczytajIWyswietlTablice int.cpp : Defines the entry point for the console application.
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

int main() {
	int x[10], n;

	WczytajRozmiarIElementyTablicy(x,&n);

	WyswietlTablice(x,n);

	printf("\n\n");
	return 0;
}