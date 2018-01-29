#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WIELKOSC_TABLICY 5
#define DLUGOSC_NAZWISKO 25
#define DLUGOSC_KIERUNEK 20
#define WIELKOSC_OCENY 5

typedef struct student {
    char nazwisko[DLUGOSC_NAZWISKO], kierunek[DLUGOSC_KIERUNEK];
    int nr_alb;
    float oceny[WIELKOSC_OCENY];
}Student;

void OddzielenieMenu ();
void OddzielenieTyldami();
void OddzielenieMyslnikamiMale();
Student WczytajJednaStrukture(Student x);
void WyswietlJednaStrukture(Student x);
void WczytajTabliceStruktur(Student *tab, int *n);
void WyswietlTabliceStruktur(Student *tab, int n);
void PoliczSredniaOcenWybranegoStudenta(Student *x, int n);
void PosortujAlfabetycznieTabliceStruktur(Student *x, int n);
void WyszukajStudentowZSredniaWiekszaOd4(Student *x, int n);
void WyszukajStudentaOWpisanymNazwisku (Student *x, int n);
void PoliczSredniaOcenWszystkichStudentow (Student *x, int n);
void PosortujRosnacoTabliceWedlugSredniej(Student *x, int n);
void WyszukajStudentowZNajwyszaSrednia(Student *x, int n);

int main()
{
    int n, menu = 0, skoncz_program = 0;

    printf("STRUKTURY - PROGRAM CWICZENIOWY\n");

    ///Wczytywanie reczne
    //Student tablica[WIELKOSC_TABLICY];
    //WczytajTabliceStruktur(tablica, &n);

    ///Wczytywanie automatyczne
    n = 5;
    Student tablica[WIELKOSC_TABLICY] = { { "Szyc", "Informatyka", 39245, { 5, 4.5, 2, 2.5, 3 } }, { "Zebrowski", "Automatyka", 39678, { 4, 4.5, 5, 4, 4.5 } }, { "Stuhr", "Automatyka", 41453, { 4, 4.5, 4, 3.5, 5 } }, { "Karolak", "Elektrotechnika", 38405, { 2, 2, 3, 3.5, 2.5 } }, { "Adamek", "Zarzadzanie", 41023, { 3, 3, 4, 3.5, 4 } } };

    ///Menu glowne
    do {
        OddzielenieMenu();
        printf("\nWybierz numer polecenia =\n\n1. Wyswietl tablice struktur\n\n2. Posortuj alfabetycznie tablice strutkur\n3. Posortuj rosnaco tablice wedlug sredniej");
        printf("\n\n4. Wyszukaj studentow z srednia wieksza od 4\n5. Wyszukaj studenta o wpisanym nazwisku\n6. Wyszukaj studentow z najwyzsza srednia");
        printf("\n7. (NIEDOSTEPNE) Wyszukaj studentow z okreslonej grupy\n\n8. Policz srednia ocen wybranego studenta\n9. Policz srednia ocen wszystkich studentow");
        printf("\n\n\n10. ZAKONCZ PROGRAM\n\n\nNumer polecenia: ");
        scanf("%i",&menu);
        switch (menu) {
        case 1: WyswietlTabliceStruktur(tablica, n); break;
        case 2: PosortujAlfabetycznieTabliceStruktur(tablica, n);  break;
        case 3: PosortujRosnacoTabliceWedlugSredniej(tablica, n); break;
        case 4: WyszukajStudentowZSredniaWiekszaOd4(tablica, n); break;
        case 5: WyszukajStudentaOWpisanymNazwisku(tablica, n); break;
        case 6: WyszukajStudentowZNajwyszaSrednia(tablica, n); break;
        //case 7: WyszukajStudentowZOkreslonejGrupy(tablica, n); break;
        case 8: PoliczSredniaOcenWybranegoStudenta(tablica, n); break;
        case 9: PoliczSredniaOcenWszystkichStudentow(tablica, n); break;
        case 10: skoncz_program = 1; break;
        default: OddzielenieTyldami(); printf("\n\n\t*** Nie ma takiego polecenia, wpisz jeszcze raz!!!\n\n"); break;
        }
        menu = 0;
    }
    while (skoncz_program == 0);
    OddzielenieTyldami();
    printf("\nProgram zakonczony");
    OddzielenieTyldami();

    return 0;
}

void OddzielenieMenu () {
    printf("\n********************************************************************************\n");
    return;
}

void OddzielenieTyldami() {
    printf("\n\n~~~~~ ~~~~~ ~~~~~ ~~~~~ ~~~~~ ~~~~~ ~~~~~ ~~~~~ ~~~~~ ~~~~~\n");
    return;
}

void OddzielenieMyslnikamiMale() {
    printf("\n----- ----- ----- ----- ----- -----\n");
    return;
}

Student WczytajJednaStrukture(Student x) {
    int i;
    printf("\nWpisz nazwisko = ");
    gets(x.nazwisko);
    printf("Wpisz kierunek = ");
    gets(x.kierunek);
    printf("Wpisz nr albumu = ");
    scanf("%i",&x.nr_alb);
    printf("Wpisz oceny =\n");
    for (i = 0; i < WIELKOSC_OCENY; i++) {
        printf("%i ocena = ",i+1);
        scanf("%f",&x.oceny[i]);
    }
    return x;
}

void WyswietlJednaStrukture(Student x) {
    int i;
    OddzielenieMyslnikamiMale();
    printf("Nazwisko = %s",x.nazwisko);
    printf("\nKierunek = %s",x.kierunek);
    printf("\nNr albumu = %i",x.nr_alb);
    printf("\nOceny = ");
    for (i = 0; i < WIELKOSC_OCENY; i++) {
        printf("%.1f",x.oceny[i]);
        if (i != (WIELKOSC_OCENY - 1))
            printf(", ");
    }
    OddzielenieMyslnikamiMale();
    return;
}

void WczytajTabliceStruktur(Student *tab, int *n) {
    int i;
    printf("Wpisz ilosc studentow w tablicy (n < %i) = ",WIELKOSC_OCENY);
    scanf("%i",n);
    for (i = 0; i < *n; i++) {
        getchar();  //usuwa ENTER
        *(tab+i) = WczytajJednaStrukture(tab[i]);
    }
    return;
}

void WyswietlTabliceStruktur(Student *tab, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("\n\n");
        OddzielenieMyslnikamiMale();
        printf("\n\tStudent nr %i\n",i+1);
        WyswietlJednaStrukture(*(tab+i));
    }
    return;
}

void PoliczSredniaOcenWybranegoStudenta(Student *x, int n) {
    int i = 0, numerstudenta = 0;
    float srednia = 0;
    OddzielenieTyldami();
    do {
    printf("\n\t*** Wpisz numer studenta do policzenia sredniej (mozliwe numery: od 1 do %i) = ",n);
    scanf("%i",&numerstudenta);
    }
    while (numerstudenta <= 0 || numerstudenta > n);
    numerstudenta -= 1;
    printf("\nWybrany student = %s\nOceny studenta =",(x+numerstudenta)->nazwisko);
    for (i = 0; i < WIELKOSC_OCENY; i++) {
        printf(" %.1f",(x+numerstudenta)->oceny[i]);
        if (i < (WIELKOSC_OCENY - 1))
            printf(",");
        srednia = srednia + (x+numerstudenta)->oceny[i];
    }
    srednia /= WIELKOSC_OCENY;
    printf("\nSrednia dla studenta %s = %.1f",(x+numerstudenta)->nazwisko, srednia);
    OddzielenieTyldami();
    return;
}

void PosortujAlfabetycznieTabliceStruktur(Student *x, int n) {
    int i, j;
    Student temp = { "", "", 0, { 0, 0, 0, 0, 0 } };
    OddzielenieTyldami();
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if( strcmp((x+j)->nazwisko, (x+j+1)->nazwisko ) > 0 && (j+1) < n) {
                temp = *(x+j);
                *(x+j) = *(x+j+1);
                *(x+j+1) = temp;
            }
        }
    }
    printf("\n\t*** Posortowana alfabetycznie tablica =");
    WyswietlTabliceStruktur(x, n);
    OddzielenieTyldami();
}

void WyszukajStudentowZSredniaWiekszaOd4 (Student *x, int n) {
    int i, j;
    float temp_srednia = 0;
    OddzielenieTyldami();
    printf("\n\t*** Studenci z srednia wieksza od 4.0:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            temp_srednia += (x+i)->oceny[j];
            if (j == n-1) {
                temp_srednia /= WIELKOSC_OCENY;
                if (temp_srednia > 4.0) {
                    printf("\nStudent nr %i %s = %.1f > 4.0",i+1,(x+i)->nazwisko,temp_srednia);
                }
            }
        }
        temp_srednia = 0;
    }
    OddzielenieTyldami();
    return;
}

void WyszukajStudentaOWpisanymNazwisku (Student *x, int n) {
    int i, istnieje = 0;
    char temp_nazwisko[DLUGOSC_NAZWISKO];
    OddzielenieTyldami();
    printf("\n\t*** Wpisz nazwisko szukanego studenta = ");
    getchar();
    gets(temp_nazwisko);
    for (i = 0; i < n; i++) {
        if (strcmp(temp_nazwisko,(x+i)->nazwisko) == 0) {
            istnieje = 1;
            break;
        }
    }
    if (istnieje == 1) {
        printf("\nStudent nr %i o nazwisku %s =\n",i+1,temp_nazwisko);
        WyswietlJednaStrukture(x[i]);
    }
    else if (istnieje == 0) {
        printf("\nTaki student nie istnieje!");
    }
    OddzielenieTyldami();
    return;
}

void PoliczSredniaOcenWszystkichStudentow (Student *x, int n) {
    int i, j, jeden = 0, jedenp = 0, dwa = 0, dwap = 0, trzy = 0, trzyp = 0, cztery = 0, czteryp = 0, piec = 0;
    float temp_srednia = 0;
    double wynik = 0;
    OddzielenieTyldami();
    printf("\n\t*** Srednia ocen wszystkich studentow\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            temp_srednia += (x+i)->oceny[j];
            if ((x+i)->oceny[j] == 1.0) jeden++;
            else if ((x+i)->oceny[j] == 1.5) jedenp++;
            else if ((x+i)->oceny[j] == 2.0) dwa++;
            else if ((x+i)->oceny[j] == 2.5) dwap++;
            else if ((x+i)->oceny[j] == 3.0) trzy++;
            else if ((x+i)->oceny[j] == 3.5) trzyp++;
            else if ((x+i)->oceny[j] == 4.0) cztery++;
            else if ((x+i)->oceny[j] == 4.5) czteryp++;
            else if ((x+i)->oceny[j] == 5.0) piec++;
        }
    }
    wynik = temp_srednia / (n*WIELKOSC_OCENY);
    printf("\nIlosc poszczegolnych ocen wszystkich studentow =\n\n1.0 = %i\n1.5 = %i\n2.0 = %i\n2.5 = %i\n3.0 = %i\n3.5 = %i\n4.0 = %i\n4.5 = %i\n5.0 = %i",jeden, jedenp, dwa, dwap, trzy, trzyp, cztery, czteryp, piec);
    printf("\n\nSrednia dla wszystkich studentow (%.2f / %i) = %.2f",temp_srednia,(n*WIELKOSC_OCENY),wynik);
    OddzielenieTyldami();
    return;
}

void PosortujRosnacoTabliceWedlugSredniej(Student *x, int n) {
    int i, j;
    float srednia = 0, tablica_srednich[WIELKOSC_TABLICY], temp_srednia;
    Student temp = { "", "", 0, { 0, 0, 0, 0, 0 } };

    for (i = 0; i < n; i++) {
        for (j = 0; j < WIELKOSC_OCENY; j++) {
            srednia += (x+i)->oceny[j];
        }
        srednia /= WIELKOSC_OCENY;
        tablica_srednich[i] = srednia;
        srednia = 0;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if( tablica_srednich[j] > tablica_srednich[j+1] && (j+1) < n) {
                temp_srednia = tablica_srednich[j];
                tablica_srednich[j] = tablica_srednich[j+1];
                tablica_srednich[j+1] = temp_srednia;
                temp = *(x+j);
                *(x+j) = *(x+j+1);
                *(x+j+1) = temp;
            }
        }
    }
    OddzielenieTyldami();
    printf("\n\t*** Posortowana rosnaco wedlug srednich tablica =");
    WyswietlTabliceStruktur(x, n);
    printf("\n\nSrednie kolejno = \n");
    for (i = 0; i < WIELKOSC_TABLICY; i++) {
        printf("%.1f",tablica_srednich[i]);
        if (i < (WIELKOSC_TABLICY - 1)) {
            printf(", ");
        }
        else
            printf("\n");
    }
    OddzielenieTyldami();
}

void WyszukajStudentowZNajwyszaSrednia(Student *x, int n) {
    int i, j;
    float srednia = 0, najwieksza = 0;
    OddzielenieTyldami();
    printf("\n\t*** Studenci z najwyzsza srednia =");

    for (i = 0; i < n; i++) {
        for (j = 0; j < WIELKOSC_OCENY; j++) {
            srednia += (x+i)->oceny[j];
        }
        srednia /= WIELKOSC_OCENY;

        if (srednia > najwieksza) {
            najwieksza = srednia;
        }
        srednia = 0;
    }
    printf("\n\nNajwyzsza srednia = %.1f\n\nNajwyzsza srednia posiadaja =",najwieksza);

    for (i = 0; i < n; i++) {
        for (j = 0; j < WIELKOSC_OCENY; j++) {
            srednia += (x+i)->oceny[j];
        }
        srednia /= WIELKOSC_OCENY;

        if (srednia == najwieksza) {
            printf("\nStudent nr %i - %s",i+1,(x+i)->nazwisko);
        }
        srednia = 0;
    }

    OddzielenieTyldami();

    return;
}
