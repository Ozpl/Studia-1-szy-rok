%% Zadanie 8: macierze
% Dane: A = [2 7 9 7 ; 3 1 5 6 ; 8 1 2 5], dokonaj:

A = [2 7 9 7 ; 3 1 5 6 ; 8 1 2 5];

% Podpunkt 8a:
% Transpozycji macierzy A

A = A';

% Podpunkt 8b:
% Wybierz 1 i 4 kolumnê macierzy A

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
% Zamieñ macierz na wektor a

a = A(:)';

% Podpunkt 8e:
% Zamieñ wektor a na macierz o wymiarach 2x6

D = reshape(a,[2,6]);

% Podpunkt 8f:
% Przerzuæ elementy macierzy góra-dó³

A = [2 7 9 7 ; 3 1 5 6 ; 8 1 2 5];
E = flipud(A);

% Podpunkt 8g:
% Przerzuæ elementy macierzy prawo-lewo

A = [2 7 9 7 ; 3 1 5 6 ; 8 1 2 5];
F = fliplr(A);

% Podpunkt 8h:
% Dodaj czwarty wiersz zawieraj¹cy same zera

A = [2 7 9 7 ; 3 1 5 6 ; 8 1 2 5];
G = zeros(1,4);
H = [A;G];

% Podpunkt 8i:
% Wybierz drugi wiersz

I = A(2,:);

% Podpunkt 8j:
% Skopiuj ostatni¹ kolumnê i utwórz z niej nowy ostatni wiersz

J = H(:,4)';
K = [H;J];

% Podpunkt 8k:
% Wyznacz sumy elementów w wierszach

L = cumsum(K,2);

% Podpunkt 8l:
% Wyznacz sumy elementów w kolumnach

M = cumsum(K);
N = [ M(5,1) M(5,2) M(5,3) M(5,4) ];

% Podpunkt 8m:
% Wyznacz sumê wszystkich elementów

O = sum(sum(K));

% Podpunkt 8n:
% Uzupe³nij macierz o pierwsz¹ kolumnê zawieraj¹c¹ numer kolumny

P = [ 1 K(1,:); 2 K(2,:); 3 K(3,:); 4 K(4,:); ];

% Podpunkt 8o:
% Przyporz¹dkowania parzystych kolumn z A do tablicy B

A = [2 7 9 7 ; 3 1 5 6 ; 8 1 2 5];
B = zeros(3,4);
B(:,2) = A(:,2);
B(:,4) = A(:,2);

% Podpunkt 8p:
% Przyporz¹dkowania nieparzystych kolumn A do tablicy C

A = [2 7 9 7 ; 3 1 5 6 ; 8 1 2 5];
C = zeros(3,4);
C(:,1) = A(:,1);
C(:,3) = A(:,3);

% Podpunkt 8q:
% Przyporz¹dkowaæ pierwszy wiersz A do wektora x1

A = [2 7 9 7 ; 3 1 5 6 ; 8 1 2 5];
x1 = A(1,:);

% Podpunkt 8r:
% Przyporz¹dkowaæ ostatnie 2 wiersze A do tablicy y

A = [2 7 9 7 ; 3 1 5 6 ; 8 1 2 5];
y = zeros(3,4);
y(2,:) = A(2,:);
y(3,:) = A(3,:);
