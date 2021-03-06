// Wskaźniki zadanie 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void WczytajRozmiarIElementyTablicy(int *t1, int *n) {
	int i;
	printf("Podaj ilosc elementow tablicy = ");
	scanf_s("%i", n);
	for (i = 0; i < *n; i++) {
		printf("x[%i] = ", i);
		scanf_s("%i", t1 + i);
	}
	return;
}

void WyswietlTablice(int *t1, int n) {
	int i;
	printf("\n\nTablica =");
	for (i = 0; i < n; i++) {
		printf("\nx[%i] = %i", i, *(t1 + i));
	}
	return;
}

void WyswietlNajmniejszyElementTablicyIJegoPozycje(int *t1, int n, int *najmniejszy, int *pozycja) {
	int i;
	*najmniejszy = *t1;
	*pozycja = 1;
	for (i = 0; i < n; i++) {
		if (*najmniejszy > *(t1+i)) {
			*najmniejszy = *(t1 + i);
			*pozycja = i + 1;
		}
	}
	printf("\n\nNajmniejszy element tablicy = %i", *najmniejszy);
	printf("\nJego pozycja = %i", *pozycja);
	return;
}

int main() {
	int x[10], n, najmniejszy, pozycja;

	WczytajRozmiarIElementyTablicy(x,&n);

	WyswietlTablice(x,n);

	WyswietlNajmniejszyElementTablicyIJegoPozycje(x, n, &najmniejszy, &pozycja);

	printf("\n\n");
    return 0;
}

