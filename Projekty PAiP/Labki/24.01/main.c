#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
    char nazwisko[25], kierunek[20];
    int nr_alb;
    float oceny[5];
}Student;

void OddzielenieMyslnikami() {
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
    for (i = 0; i < 5; i++) {
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
    for (i = 0; i < 5; i++) {
        printf("%.1f",x.oceny[i]);
        if (i != 4)
            printf(", ");
    }
    OddzielenieMyslnikamiMale();
    return;
}

void WczytajTabliceStruktur(Student *tab, int *n) {
    int i;
    printf("Wpisz ilosc studentow w tablicy (n < 5) = ");
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

void PoliczSredniaOcenWybranegoStudenta(Student *x, int *n, float *srednia) {
    int i = 0, numerstudenta = 0;
    OddzielenieMyslnikami();
    do {
    printf("\n\t*** Wpisz numer studenta do policzenia sredniej (mozliwe numery: od 1 do %i) = ",n);
    scanf("%i",&numerstudenta);
    }
    while (numerstudenta <= 0 || numerstudenta > n);
    numerstudenta -= 1;
    printf("\nWybrany student = %s\nOceny studenta =",(x+numerstudenta)->nazwisko);
    for (i = 0; i < 5; i++) {
        printf(" %.1f",(x+numerstudenta)->oceny[i]);
        if (i < 4)
            printf(",");
        *srednia = *srednia + (x+numerstudenta)->oceny[i];
    }
    *srednia /= 5.0;
    printf("\nSrednia dla studenta %s = %.1f",(x+numerstudenta)->nazwisko, *srednia);
    OddzielenieMyslnikami();
    return;
}

/*
void PosortujAlfabetycznieTabliceStruktur(Student *x, int n) {
    int i, j;
    Student temp;
    temp = x[0];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if ((x+j)->nazwisko[0] > (x+j+1)->nazwisko[0]) {
                temp.nazwisko = (x+j)->nazwisko;
                (x+j)->nazwisko = (x+j+1).nazwisko;
                (x+j+1).nazwisko = temp.nazwisko;
            }
        }
        j = 0;
    }
}
**/

void WyszukajStudentowZSredniaWiekszaOd4 (Student *x, int n) {
    int i, j;
    float temp_srednia = 0;
    OddzielenieMyslnikami();
    printf("\n\t*** Studenci z srednia wieksza od 4:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            temp_srednia += (x+i)->oceny[j];
            if (j == n-1) {
                temp_srednia /= 5.0;
                if (temp_srednia > 4.0) {
                    printf("\n%s = %.1f > 4.0",(x+i)->nazwisko,temp_srednia);
                }
                else
                    printf("\n%s = %.1f <= 4.0",(x+i)->nazwisko, temp_srednia);
            }
        }
        temp_srednia = 0;
    }
    OddzielenieMyslnikami();
    return;
}

void WyszukajStudentaOWpisanymNazwisku (Student *x, int n) {
    int i, istnieje = 0;
    char temp_nazwisko[25];
    OddzielenieMyslnikami();
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
        printf("\nIstnieje taki student =\n");
        WyswietlJednaStrukture(x[i]);
    }
    else if (istnieje == 0) {
        printf("\nTaki student nie istnieje!");
    }
    OddzielenieMyslnikami();
    return;
}

int main()
{
    int n;
    float srednia = 0;

    printf("STRUKTURY - PROGRAM CWICZENIOWY");

    ///Wczytywanie reczne
    //Student tablica[5];
    //WczytajTabliceStruktur(tablica, &n);

    ///Wczytywanie automatyczne
    n = 5;
    Student tablica[5] = { { "Zebrowski", "Automatyka", 39678, { 4, 4.5, 5, 4, 4.5 } }, { "Szyc", "Informatyka", 39245, { 5, 4.5, 2, 2, 3 } }, { "Stuhr", "Automatyka", 41000, { 4, 4.5, 4, 3.5, 5 } }, { "Karolak", "Elektrotechnika", 38405, { 2, 2, 3, 3.5, 2.5 } }, { "Adamek", "Zarzadzanie", 41023, { 3, 3, 4.5, 3.5, 4 } } };;

    WyswietlTabliceStruktur(tablica, n);

    PoliczSredniaOcenWybranegoStudenta(tablica, n, &srednia);

    //PosortujAlfabetycznieTabliceStruktur(tablica, n);

    WyszukajStudentowZSredniaWiekszaOd4(tablica, n);

    WyszukajStudentaOWpisanymNazwisku(tablica, n);

    return 0;
}
