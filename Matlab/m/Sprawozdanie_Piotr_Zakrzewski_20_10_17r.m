%% Zakrzewski Piotr 42033 AR17L Pia_10-12 zp42033@zut.edu.pl 
% LAB_3: *Podstawowe dzialania tablicowe i macierzowe* 20.10.2017
%
% *Celem* jest sprawdzenie podstawowych umiejetnosci w programie Matlab.
%
% *Program cwiczenia*: (nie wolno uzywac petli *for while*)
%
% 42033 - nr albumu, AR17L - kierunek AR, rok 1, grupa 7, forma zajec L, termin zajec piatek 10-12 
% 
% LAB_3, Podstawowe dzialania tablicowe i macierzowe, 20.10.17r.


%% Zadanie 1: wektory
% Utworzyc wektor o liczbach calkowitych parzystych z przedzialu od 31 do 75.

x = (31:2:74) + 1;

%% Zadanie 2: macierze
% Niech X=magic(5):

X = magic(5);

% Podpunkt 2a:
% Dodaj 16 do kazdego elementu

X = X+16;

% Podpunkt 2b:
% Dodaj 3 tylko do elementow o dwoch nieparzystych indeksach np. (1,1), (1,3), (5,1) itd. i wynik zapisz w X

X(1,1) = X(1,1) + 3;
X(1,3) = X(1,3) + 3;
X(1,5) = X(1,5) + 3;
X(3,1) = X(3,1) + 3;
X(3,3) = X(3,3) + 3;
X(3,5) = X(3,5) + 3;
X(5,1) = X(5,1) + 3;
X(5,3) = X(5,3) + 3;
X(5,5) = X(5,5) + 3;

% Podpunkt 2c:
% Oblicz pierwiastek kwadratowy z kazdego elementu

X = sqrt(X);

% Podpunkt 2d:
% Podnies kazdy element macierzy do kwadratu

X = X .^ 2;

% Podpunkt 2e:
% Podnies cala macierz do kwadratu

X = X ^ 2;

%% Zadanie 3: macierze
% Niech x = [3 2 6 8]' i y = [4 1 3 5]' (wektory kolumnowe):

x = [3 2 6 8]';
y = [4 1 3 5]';

% Podpunkt 3a:
% Dodaj sume elementow x do y

a = x+y;

% Podpunkt 3b:
% Podnies kazdy element x do potegi okreslonej w y

a = x.^y;

% Podpunkt 3c:
% Podziel kazdy element y przez odpowiadajacy mu element x

a = y./x;

% Podpunkt 3d:
% Pomnoz kazdy element x przez odpowiadajacy mu element w y, nazywajac wynik z

z = x.*y;

% Podpunkt 3e:
% Dodaj elementy z i nazwij jako w

w = sum(z);

% Podpunkt 3f:
% Oblicz x'*y - w i zinterpretuj wynik

wynik = x' * y - w;

%% Zadanie 4: macierze
% Wygeneruj:

% Podpunkt 4a:
% Macierz X o wymiarach 100x100 zawierajaca same zera z wyjatkiem elementu o wspolrzednych 1,1 o wartosci 100

X = zeros(100);
X(1,1) = 100;

% Podpunkt 4b:
% Tablice B losowa 1x5 o wartosciach calkowitych, rozkladzie jednostajnym w przedziale od 1 do 15

B = randperm(15,5);

%% Zadanie 5: macierze
% Utworz wektor x o 50 elementach wg nastepujacego schematu:

% Podpunkt 5a:
% 2, 4, 6, 8, ...

x = linspace(2,100,50);

% Podpunkt 5b:
% 10, 8, 6, 4, 2, 0, -2, -4, ...

x = linspace(10,-88,50);

% Podpunkt 5c:
% 1, 1/2, 1/3, 1/4, 1/5, ...

Q = linspace(1,1,50);
W = linspace(1,50,50);
x = Q ./ W;

% Podpunkt 5d:
% 0, 1/2, 2/3, 3/4, 4/5, ...

H = linspace(0,49,50);
M = linspace(1,50,50);
x = H./M;

%% Zadanie 6: macierze
% Oblicz sume 100 elementow ciagu:
% 
% $$x_n = (-1)^{(n+1)} / (2n-1)$$

t = [1:100];
w = ((-1).^(t+1))./(2.*t-1);
u = sum(w);


%% Zadanie 7: wektory
% Dany: x = [3 1 5 7 9 2 6], wyznacz:

x = [3 1 5 7 9 2 6];

% Podpunkt 7a:
% Piaty element wektora x

a = x(5);

% Podpunkt 7b:
% Elementy wektora x o indeksach od 2 do 5

v = x(2:5);

% Podpunkt 7c:
% Elementy x o indeksach 6, 4, 2

l = [ x(6) x(4) x(2) ];

% Podpunkt 7d:
% Elementy x od 2 do przedostatniego

n = x(2:6);

% Podpunkt 7e:
% Sume elementow x o parzystych indeksach

l = [ x(6) x(4) x(2) ];
u = sum(l);

% Podpunkt 7f:
% Usun z x element o indeksie 4

x(4) = [];

% Podpunkt 7g:
% Uzupelnij x o dwa nowe elementy 0 na poczatku i 0 na koncu

z = 0;
b = [z x z];

%% Zadanie 8: macierze
% Dane: A = [2 7 9 7 ; 3 1 5 6 ; 8 1 2 5], dokonaj:

A = [2 7 9 7 ; 3 1 5 6 ; 8 1 2 5];

% Podpunkt 8a:
% Transpozycji macierzy A

A = A';

% Podpunkt 8b:
% Wybierz 1 i 4 kolumne macierzy A

Y = [A(1,:)' A(4,:)'];

% Podpunkt 8c:
% Wybierz elementy z 2 i 3 wiersza oraz 4 i 1 kolumny macierzy A

A = [2 7 9 7 ; 3 1 5 6 ; 8 1 2 5];
Z = zeros(3,4);
Z(2,:) = A(2,:);
Z(3,:) = A(3,:);
Z(:,4) = A(:,4);
Z(:,1) = A(:,1);

% Podpunkt 8d:
% Zamien macierz na wektor a

a = A(:)';

% Podpunkt 8e:
% Zamien wektor a na macierz o wymiarach 2x6

D = reshape(a,[2,6]);

% Podpunkt 8f:
% Przerzuc elementy macierzy gora-dol

A = [2 7 9 7 ; 3 1 5 6 ; 8 1 2 5];
E = flipud(A);

% Podpunkt 8g:
% Przerzuc elementy macierzy prawo-lewo

A = [2 7 9 7 ; 3 1 5 6 ; 8 1 2 5];
F = fliplr(A);

% Podpunkt 8h:
% Dodaj czwarty wiersz zawierajacy same zera

A = [2 7 9 7 ; 3 1 5 6 ; 8 1 2 5];
G = zeros(1,4);
H = [A;G];

% Podpunkt 8i:
% Wybierz drugi wiersz

I = A(2,:);

% Podpunkt 8j:
% Skopiuj ostatnia kolumne i utworz z niej nowy ostatni wiersz

J = H(:,4)';
K = [H;J];

% Podpunkt 8k:
% Wyznacz sumy elementow w wierszach

L = cumsum(K,2);

% Podpunkt 8l:
% Wyznacz sumy elementow w kolumnach

M = cumsum(K);
N = [ M(5,1) M(5,2) M(5,3) M(5,4) ];

% Podpunkt 8m:
% Wyznacz sume wszystkich elementow

O = sum(sum(K));

% Podpunkt 8n:
% Uzupelnij macierz o pierwsza kolumne zawierajaca numer kolumny

P = [ 1 K(1,:); 2 K(2,:); 3 K(3,:); 4 K(4,:); ];

% Podpunkt 8o:
% Przyporzadkowania parzystych kolumn z A do tablicy B

A = [2 7 9 7 ; 3 1 5 6 ; 8 1 2 5];
B = zeros(3,4);
B(:,2) = A(:,2);
B(:,4) = A(:,2);

% Podpunkt 8p:
% Przyporzadkowania nieparzystych kolumn A do tablicy C

A = [2 7 9 7 ; 3 1 5 6 ; 8 1 2 5];
C = zeros(3,4);
C(:,1) = A(:,1);
C(:,3) = A(:,3);

% Podpunkt 8q:
% Przyporzadkowac pierwszy wiersz A do wektora x1

A = [2 7 9 7 ; 3 1 5 6 ; 8 1 2 5];
x1 = A(1,:);

% Podpunkt 8r:
% Przyporzadkowac ostatnie 2 wiersze A do tablicy y

A = [2 7 9 7 ; 3 1 5 6 ; 8 1 2 5];
y = zeros(3,4);
y(2,:) = A(2,:);
y(3,:) = A(3,:);

%% Zadanie 9: rozwiazywanie funkcji
% Oblicz ponizsze wyrazenia w Matlabie, wynik sprawdz recznie:

% Podpunkt 9a:
% 2 / 2 * 3

z = 2 ./ 2 * 3;

% Podpunkt 9b:
% 6 - 2 / 5 + 7 ^ 2 - 1

v = 6 - 2/5 + 7^2 - 1;

% Podpunkt 9c:
% 10 / 2 \ 5 - 3 + 2 * 4

b = 10/2 - 5 - 3 + 2*4;

% Podpunkt 9d:
% 3 ^ 2 / 4

e = 3^2 / 4;

% Podpunkt 9e:
% 3 ^ 2 ^ 2

o = 3^2^2;

% Podpunkt 9f:
% 2 + round(6 / 9 + 3 * 2) / 2 - 3

S = 2 + round(6/9 + 3*2)/2 - 3;

% Podpunkt 9g:
% 2 + floor(6 / 9 + 3 * 2) / 2 - 3

m = 2 + floor(6/9 + 3*2)/2 - 3;

% Podpunkt 9h:
% 2 + ceil(6 / 9 + 3 * 2) / 2 - 3

D = 2 + ceil(6/9 + 3*2)/2 - 3;

%% Wnioski - podsumowanie
% Zadania mialy na celu wprowadzenie do programu MATLAB, wykonanie operacji na wektorach i macierzach, oraz nauki
% podstawowych funkcji i komend.