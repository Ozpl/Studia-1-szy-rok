// AAA Funkcja WczytajIWyswietlTablice int.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void WczytajRozmiarIElementyTablicy(float *t1, int *n) {
	int i;
	printf("Wpisz rozmiar tablicy (n < 10) = ");
	scanf_s("%i", n);
	for (i = 0; i < *n; i++) {
		printf("x[%i] = ", i);
		scanf_s("%f", t1 + i);
	}
	return;
}

void WyswietlTablice(float const *t1, int n) {
	int i;
	printf("\nTablica =");
	for (i = 0; i < n; i++) {
		printf("\nx[%i] = %f", i, *(t1 + i));
	}
	return;
}

int main() {
	float x[10];
	int n;

	WczytajRozmiarIElementyTablicy(x, &n);

	WyswietlTablice(x, n);

	printf("\n\n");
	return 0;
}