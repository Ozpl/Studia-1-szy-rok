// Wskaźniki zadanie 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void WczytajRozmiarIElementyTablicy (int *t1, int *n) {
	int i;
	printf("Wpisz rozmiar tablicy (n < 10) = ");
	scanf_s("%i",n);
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
		printf("\nx[%i] = %i",i,*(t1+i));
	}
	return;
}

void ObliczSredniaWartoscTablicyIWartosciWiekszeOdSredniej (int *t1, int n, int *srednia, int *ilosc) {
	int i;
	for (i = 0; i < n; i++) {
		*srednia += *(t1 + i);
	}
	*srednia /= n;
	for (i = 0; i < n; i++) {
		if (*(t1+i) > *srednia) {
			*ilosc += 1;
		}
	}
	printf("\n\nSrednia wszystkich elementow tablicy = %i\nIlosc elementow wiekszych od sredniej = %i", *srednia,*ilosc);
	return;
}

int main() {
	int n, x[10],srednia = 0, ilosc = 0;

	WczytajRozmiarIElementyTablicy(x,&n);

	WyswietlTablice(x,n);

	ObliczSredniaWartoscTablicyIWartosciWiekszeOdSredniej(x,n,&srednia,&ilosc);

	printf("\n\n");
	return 0;
}