%% Zakrzewski Piotr 42033 AR17L Pon_10-12 zp42033@zut.edu.pl 
% LAB_5: *Generowanie sygnalow* 30.10.2017
%
% *Celem* cwiczenia jest opanowanie umiejetnosci generowania i wykreslania sygnalow w dziedzinie czasu.
%
% 42033 - nr albumu, AR17L - kierunek AR, rok 1, grupa 7, forma zajec L, termin zajec poniedzialek 10-12 
% 
% LAB_5, Generowanie sygnalow, 30.10.17r.

%% Zadanie
% Prosze wygenerowac nastepujace sygnaly w Matlabie. Dla kazdego z sygnalow nalezy wygenerowac podstawe czasu poczawszy od zera, na horyzoncie czasowym 4 pelnych okresow sygnalu. Ilosc punktow dla wykresow 500.

% podpunkt 1
% sinusoida o wart skutecznej 230 i czestotliwosci 50Hz

figure;
a = linspace(0,0.08,500);
b = 230 * sin(2*pi / 0.02 * a);
plot(a,b);
title('Podpunkt 1');

% podpunkt 2
% sygnal prostokatny symetryczny amplituda 10 okres 0.2

figure;
c = linspace(0,0.8,500);
d = 10 * sign(sin(2*pi / 0.2 * c));
plot(c,d);
title('Podpunkt 2');

% podpunkt 3
% sygnal trojkatny asymetryczny amplituda 100 okres 0.05

figure;
e = linspace(0,0.2,500);
f = 100 * 2/pi * asin(sin(pi / 0.05 * e));
plot(e,abs(f));
title('Podpunkt 3');

% podpunkt 4
% sygnal piloksztatny amplituda 30 okres 0.01

figure;
g = linspace(0,0.04,500);
h = 300 * rem(10*g,0.1);
plot(g,h);
title('Podpunkt 4');

% podpunkt 6
% sygnal impulsowy okres 0.2 (gensig – pulse)

figure;
[i,j]=gensig('pulse', 0.2,0.8,0.001);
plot(j,i);
title('Podpunkt 5');

% podpunkt 7
% sygnal trapezoidalny o okresie 0.1 amplituda 4

figure;
[k,l] = gensig('sin',0.1,0.4,0.01);
plot(l,asin(k));
title('Podpunkt 6');

%% Wnioski - podsumowanie
% Zadania mialy nauczyc podstawowych komend pozwalajace generowac sygnaly.