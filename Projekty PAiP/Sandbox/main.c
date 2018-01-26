#include <stdio.h>
#include <stdlib.h>

struct asdf {
int i;
};

struct asdf ZmienWartosc(struct asdf x) {
    x.i -= 5;
    struct asdf qwer = x;
    return qwer;
}

int main()

{
    int i;
    typedef struct urodzony { int dzien, miesiac }urodzony;
    typedef struct debil idiota, moron;

	struct debil {
		char imie[40];
		int iq, dlugoscpenisa;
		urodzony;
	};

    idiota Oskar = { "Oskar", 40, 3, {1, 2} };
    moron Grzesiu = { "Grzesiu", 80, 31, {3, 4} };
    struct debil Piotr = { "Piotr", 140, 24, {5, 6} };

	printf("\n");
	for (i = 0; Oskar.imie[i]!='\0'; i++) {
        printf("%c",Oskar.imie[i]);
	}
	printf("\nIQ = %i\nDlugosc = %i", Oskar.iq, Oskar.dlugoscpenisa);

	printf("\n");
	for (i = 0; Grzesiu.imie[i]!='\0'; i++) {
        printf("%c",Grzesiu.imie[i]);
	}
	printf("\nIQ = %i\nDlugosc = %i", Grzesiu.iq, Grzesiu.dlugoscpenisa);

	printf("\n");
	for (i = 0; Piotr.imie[i]!='\0'; i++) {
        printf("%c",Piotr.imie[i]);
	}
	printf("\nIQ = %i\nDlugosc = %i", Piotr.iq, Piotr.dlugoscpenisa);

	printf("\nData = %i %i", Oskar.dzien, Oskar.miesiac);
	printf("\nData = %i %i", Grzesiu.dzien, Grzesiu.miesiac);
	printf("\nData = %i %i", Piotr.dzien, Piotr.miesiac);

	Oskar = Piotr;

	printf("\n");
	for (i = 0; Oskar.imie[i]!='\0'; i++) {
        printf("%c",Oskar.imie[i]);
	}
	printf("\nIQ = %i\nDlugosc = %i", Oskar.iq, Oskar.dlugoscpenisa);

	struct asdf asdf1 = { 12 };
	struct asdf asdf2 = ZmienWartosc(asdf1);
	printf("\nPierwsza = %i, druga = %i",asdf1.i,asdf2.i);

	return 0;
}
