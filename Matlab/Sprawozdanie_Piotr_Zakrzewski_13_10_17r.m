%% Zakrzewski Piotr 42033 AR17L Pia_10-12 zp42033@zut.edu.pl 
% LAB_2: *Wprowadzenie do programu Matlab* 13.10.2017
%
% *Celem* niniejszego cwiczenia jest wykonanie kilkunastu prostych zadan na
% macierzach i wektorach.
%
% 42033 - nr albumu, AR17L - kierunek AR, rok 1, grupa 7, forma zajec L, termin zajec piatek 10-12 
% 
% LAB_2, Zadania na wektorach i macierzach, 13.10.17r.


%% Zadanie 1: wektory
% 
% Zdefiniuj wektor x postaci:
%
% $$x = [0,4,8,...,16,20]$$

x=0:4:20;

%% Zadanie 2: wektory
% Zdefiniuj wektor y postaci:
%
% $$y = [0,-2,-4,...,-8,-10]$$

y=0:-2:-10;

%% Zadanie 3: wektory
% Zdefiniuj wektor z posiadajacy 10 elementow w postaci:
%
% $$z = [-2,...,3]$$

z=linspace(-2,3,10);

%% Zadanie 4: macierze
% Stworz macierz A o wymiarze 2x4, ktora sklada sie z samych cyfr 5:
%
%
% $${\bf{A}} = \left[ {\begin{array}{*{20}c}
%   5 & 5 & 5 & 5\\
%   5 & 5 & 5 & 5\\
% \end{array}} \right]$$

A=zeros(2,4);
A(:,:) = 5;

%% Zadanie 5: macierze
% Stworz macierz I o wymiarze 5x5, ktora sklada sie z samych cyfr 1:
%
% $${\bf{I}} = \left[ {\begin{array}{*{20}c}
%   1 & 1 & 1 & 1 & 1 \\
%   1 & 1 & 1 & 1 & 1 \\
%   1 & 1 & 1 & 1 & 1 \\
%   1 & 1 & 1 & 1 & 1 \\
%   1 & 1 & 1 & 1 & 1 \\
% \end{array}} \right]$$

I=ones(5);

%% Zadanie 6: macierze
% Stworz macierz Z o wymiarze 4x4, która sklada sie z samych cyfr 0:
%
% $${\bf{Z}} = \left[ {\begin{array}{*{20}c}
%   0 & 0 & 0 & 0 \\
%   0 & 0 & 0 & 0 \\
%   0 & 0 & 0 & 0 \\
%   0 & 0 & 0 & 0 \\
% \end{array}} \right]$$

Z=zeros(4,4);

%% Zadanie 7: wektory
% Zdefiniuj wektor t1 zaczynajacy sie od cyfry 0, a konczacy na cyfrze 0.1, który sklada sie z 21 elementow:
%
% $$t_1 = [0,...,0.1]$$

t1=linspace(0,0.1,21);

%% Zadanie 8: wektory
% Zdefiniuj wektor t2 zaczynajacy sie od cyfry 0, a konczacy na cyfrze 0.1, który sklada sie z 20 elementow:
%
% $$t_2 = [0,...,0.1]$$

t2=linspace(0,0.1,20);

%% Zadanie 9: rozwiazywanie funkcji
% Oblicz funkcje:
%
% $$ f(x)=
% \begin{cases}
% x_1 + 7x_2 - 3x_3 + 2x_4 = 8; \\
% -2x_1 - 5x_4 = 15; \\
% 7x_1 + 10x_2 - 16x_4 = 0; \\
% 8x_1 + x_2 - 7x_3 + 3x_4 = 1;\\
% \end{cases}
% $$
%

A=[1 7 -3 2; -2 0 0 -5; 7 10 0 -16; 8 1 -7 3];
B=[8; 15; 0; 1];

W=det(A);

A1=A;
A1(:,1)=B;
W1=det(A1);

A2=A;
A2(:,2)=B;
W2=det(A2);

A3=A;
A3(:,3)=B;
W3=det(A3);

A4=A;
A4(:,4)=B;
W4=det(A4);

x1=W1 / W;
x2=W2 / W;
x3=W3 / W;
x4=W4 / W;

%% Wnioski - podsumowanie
% Zadania mialy na celu wprowadzenie do programu MATLAB, wykonanie operacji na wektorach i macierzach, oraz nauki
% podstawowych funkcji i komend.