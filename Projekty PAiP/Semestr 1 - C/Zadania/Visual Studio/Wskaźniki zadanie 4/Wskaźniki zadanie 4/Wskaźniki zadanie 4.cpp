// Wskaźniki zadanie 4.cpp : Defines the entry point for the console application.
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

void ObliczIloscLiczbNieparzystychIPodajPozycjePierwszej(int *t1, int n, int *nieparzyste, int *pozycja) {
	int i, pierwsza = -1;
	*nieparzyste = 0;
	*pozycja = 0;
	for (i = 0; i < n; i++) {
		if (*(t1+i) % 2 != 0) {
			*nieparzyste += 1;
			if (pierwsza == -1) {
				*pozycja = i + 1;
				pierwsza++;
			}
		}
	}
	if (*nieparzyste == 0) {
		printf("\n\nW tablicy nie ma liczb nieparzystych");
	}
	else
		printf("\n\nW tablicy jest %i liczb nieparzystych, a pierwsza jest na pozycji %i", *nieparzyste, *pozycja);
	return;
}

int main() {
	int x[10], n, nieparzyste, pozycja;

	WczytajRozmiarIElementyTablicy(x, &n);

	WyswietlTablice(x, n);

	ObliczIloscLiczbNieparzystychIPodajPozycjePierwszej(x, n, &nieparzyste, &pozycja);

	printf("\n\n");
	return 0;
}