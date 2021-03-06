// Wskaźniki zadanie 8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"

void WczytajRozmiarIElementyTablicy(float *t1, float *n) {
	int i;
	printf("Wpisz rozmiar tablicy (n < 10) = ");
	scanf_s("%f", n);
	for (i = 0; i < *n; i++) {
		printf("x[%i] = ", i);
		scanf_s("%f", t1 + i);
	}
	return;
}

void WyswietlTablice(float const *t1, float n) {
	int i;
	printf("\nTablica =");
	for (i = 0; i < n; i++) {
		printf("\nx[%i] = %f", i, *(t1 + i));
	}
	return;
}

void ObliczSredniaArytmetycznaIGeometryczna(float *t1, float n, float *arytmetyczna, float *geometryczna) {
	int i;
	*arytmetyczna = 0;
	*geometryczna = 1;
	for (i = 0; i < n; i++) {
		*arytmetyczna += *(t1 + i);
		*geometryczna *= *(t1 + i);
	}
	*arytmetyczna /= n;
	for (i = 1; i < n; i++) {
		*geometryczna = sqrt(*geometryczna);
	}
	printf("\n\nSrednia arytmetyczna = %f", *arytmetyczna);
	printf("\nSrednia geometryczna = %f", *geometryczna);
	return;
}

int main() {
	float x[10], n, arytmetyczna, geometryczna;

	WczytajRozmiarIElementyTablicy(x, &n);

	WyswietlTablice(x, n);

	ObliczSredniaArytmetycznaIGeometryczna(x,n,&arytmetyczna,&geometryczna);

	printf("\n\n");
	return 0;
}