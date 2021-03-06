// Wskaźniki zadanie 6.cpp : Defines the entry point for the console application.
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

void ObliczIloscLiczbPodzielnychPrzez3IZnajdzNajwiekszaTakaLiczbe(int *t1, int n, int *podzielne, int *najwieksza) {
	int i;
	*podzielne = 0;
	*najwieksza = 0;
	for (i = 0; i < n; i++) {
		if (*(t1+i) % 3 == 0) {
			*podzielne += 1;
			if (*(t1+i) % 3 == 0 && *(t1+i) > *najwieksza) {
				*najwieksza = *(t1 + i);
			}
		}
	}
	if (*podzielne == 0) {
		printf("\n\nW tablicy nie ma liczb podzielnych przez 3");
	}
	else
		printf("\n\nW tablicy jest %i liczb podzielnych przez 3, a najwieksza z nich to %i", *podzielne, *najwieksza);
}

int main() {
	int x[10], n, podzielne, najwieksza;

	WczytajRozmiarIElementyTablicy(x, &n);

	WyswietlTablice(x, n);

	ObliczIloscLiczbPodzielnychPrzez3IZnajdzNajwiekszaTakaLiczbe(x,n,&podzielne,&najwieksza);

	printf("\n\n");
	return 0;
}