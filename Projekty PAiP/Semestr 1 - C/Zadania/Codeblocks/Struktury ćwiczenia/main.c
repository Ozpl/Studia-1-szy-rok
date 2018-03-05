#include <stdio.h>
#include <stdlib.h>

//Globalna struktura do u¿ycia w funkcji ZmienWartosc
struct GlobalnaStruktura {
int i;
};

//Wchodzi i wychodzi struktura nazwana GlobalnaStruktura, jednak ju¿ z wartoœci¹ zmienion¹ wewn¹trz funkcji
struct GlobalnaStruktura ZmienWartosc(struct GlobalnaStruktura x) {
    x.i -= 5;   //x.i odwo³uje siê do Struktura1.i, czyli do zmiennej 12 - wynikiem jest 7
    struct GlobalnaStruktura LokalnaStruktura = x;  //tworzê now¹ strukturê i j¹ zwracam (bez pisania typu struct)
    return LokalnaStruktura;
}

int main()

{
    int i;
    typedef struct Urodzony { int dzien; char miesiac[40] } Urodziny;    //tworzê now¹ strukturê i nadajê jej alias "Urodziny", przez co mogê wywo³ywaæ j¹ na dwa sposoby: "struct Urodzony" lub samo "Urodziny"
    typedef struct Osoba Czlowiek, Persona;  //typedef tworzy alias dla pustej struktury Osoba

	struct Osoba {
		char imie[40];
		int wzrost, rozmiarbuta;
		Urodziny;
	};

    Czlowiek Aleksandra = { "Aleksandra", 165, 41, {4, "maja"} };   //trzy ró¿ne odwo³ania do jednej struktury
    Persona Michal = { "Michal", 184, 44, {15, "wrzesnia"} };
    struct Osoba Adam = { "Adam", 191, 46, {27, "lipca"} };



	for (i = 0; Aleksandra.imie[i] != '\0'; i++) {  //wyœwietlanie zmiennych ze struktury
        printf("%c",Aleksandra.imie[i]);
	}
	printf("\nWzrost = %i\nRozmiar buta = %i\n\n", Aleksandra.wzrost, Aleksandra.rozmiarbuta);

	for (i = 0; Michal.imie[i] != '\0'; i++) {
        printf("%c",Michal.imie[i]);
	}
	printf("\nWzrost = %i\nRozmiar buta = %i\n\n", Michal.wzrost, Michal.rozmiarbuta);

	for (i = 0; Adam.imie[i] != '\0'; i++) {
        printf("%c",Adam.imie[i]);
	}
	printf("\nWzrost = %i\nRozmiar buta = %i", Adam.wzrost, Adam.rozmiarbuta);



	printf("\n\nUrodziny Aleksandra = %i ", Aleksandra.dzien);
    for (i = 0; Aleksandra.miesiac[i] != '\0'; i++) {
        printf("%c",Aleksandra.miesiac[i]);
	}
	printf("\nUrodziny Michal = %i ", Michal.dzien, Michal.miesiac);
    for (i = 0; Michal.miesiac[i] != '\0'; i++) {
        printf("%c",Michal.miesiac[i]);
	}
	printf("\nUrodziny Adam = %i ", Adam.dzien, Adam.miesiac);
    for (i = 0; Adam.miesiac[i] != '\0'; i++) {
        printf("%c",Adam.miesiac[i]);
	}



	Aleksandra = Adam;  //kopiowanie ca³ej struktury do innej to zwyk³e a = b

	printf("\n\nWyswietlanie Aleksandra po Aleksandra = Adam\n");
	for (i = 0; Aleksandra.imie[i] != '\0'; i++) {
        printf("%c",Aleksandra.imie[i]);
	}
	printf("\nWzrost = %i\nRozmiar buta = %i", Aleksandra.wzrost, Aleksandra.rozmiarbuta);



	struct GlobalnaStruktura Struktura1 = { 12 };   //deklaracja pierwszej struktury
	struct GlobalnaStruktura Struktura2 = ZmienWartosc(Struktura1); //zmiana struktury przez u¿ycie funckji
	printf("\n\n\nPierwsza struktura = %i\nDruga struktura = %i\n",Struktura1.i,Struktura2.i);

	return 0;
}
