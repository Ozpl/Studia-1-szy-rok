// Sandbox.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void wczyt(int *t, int *wn);
void wysw(const int *t, int n);
void oblicz(const int *t, int n, int *w_ile, int *w_max);

int main()

{
	int a[20], n, ile = 0, max;
	wczyt(a, &n);
	wysw(a, n);
	oblicz(a, n, &ile, &max);
	return 0;
}

void wczyt(int *t, int *wn)
{
	int i;
	printf("\nPodaj rozmiar tablicy");
	scanf_s("%i", wn);

	for (i = 0; i<*wn; i++)
	{
		printf("\n[%i]=", i);
		scanf_s("%i", t + i);
	}
	return;
}
void wysw(const int *t, int n)
{
	int i;
	puts("Wczytana tablica");
	for (i = 0; i<n; i++)
	{
		printf("\n[%i]=%i", i, *(t + i));
	}
	return;
}

void oblicz(const int *t, int n, int *w_ile, int *w_max)
{
	int i = 0;
	*w_max = *t;
	for (i = 0; i<n; i++)
	{
		if (*(t + i) % 3 == 0)
		{
			*w_ile += 1;
		}
		if (*(t + i)>*w_max)
		{
			*w_max = *(t + i);
		}
	}
	printf("\n Ilosc liczb podzielnych przez 3 jest rowna %i,najwieksza wartosc %i ", *w_ile, *w_max);
	return;
}