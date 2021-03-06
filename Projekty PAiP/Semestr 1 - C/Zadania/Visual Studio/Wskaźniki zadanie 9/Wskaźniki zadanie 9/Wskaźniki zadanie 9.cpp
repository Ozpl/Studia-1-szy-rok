// Wskaźniki zadanie 9.cpp : Defines the entry point for the console application.
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

void PolaczDwieTabliceWJedna(float *t1, int n1, float *t2, int n2, float *t3) {
	int i, j;
	for (i = 0; i < n1; i++) {
		*(t3 + i) = *(t1 + i);
	}
	for (j = 0; j < n2; j++) {
		*(t3 + i) = *(t2 + j);
		i++;
	}
	WyswietlTablice(t3, n1 + n2);
	return;
}

int main() {
	float x[10], y[10], z[20];
	int n1, n2;

	WczytajRozmiarIElementyTablicy(x, &n1);
	WczytajRozmiarIElementyTablicy(y, &n2);

	WyswietlTablice(x, n1);
	WyswietlTablice(y, n2);

	PolaczDwieTabliceWJedna(x, n1, y, n2, z);

	printf("\n\n");
	return 0;
}