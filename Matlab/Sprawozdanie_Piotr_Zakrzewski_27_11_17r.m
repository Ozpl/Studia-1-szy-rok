%% Zakrzewski Piotr 42033 AR17L Pon_10-12 zp42033@zut.edu.pl 
% LAB_8: *Skrypty i funkcje* 27.11.2017
%
% *Celem* cwiczenia jest nabycie umiejetnosci tworzenia skryptow / funkcji.
%
% 42033 - nr albumu, AR17L - kierunek AR, rok 1, grupa 7, forma zajec L, termin zajec poniedzialek 10-12 
% 
% LAB_8, Skrypty i funkcje, 27.11.17r.

%% Zadanie 1
% 1. Utworz skrypt do rysowania w programie Matlab wykresu funkcji:
% 
% f(x) = (sqrt(cos(x*p)) * cos(a*x) + sqrt(x)) * (4 - x^2)^0.1
% 
% 2. Wywolaj skrypt z poziomu Edytora (3 sposoby) z poziomu Command Window
% oraz sprawdz dzialanie helpa
% 
% 3. Zmien skrypt na funkcje (dodanie naglowka), wyczysc Workspace i zaobserwuj
% roznice pomiedzy skryptem.
% 
% 4. Wprowadz parametr wejsciowy p do wywolania i wykorzystaj go w kodzie
% funkcji.
% 
% 5. Wprowadz drugi parametr wejsciowy opcjonalny L i wykorzystaj go w kodzie
% funkcji.
% 
% 6. Dodaj jeden parametr wyjsciowy dla funkcji
% 
% 7. Dodaj drugi parametr wyjsciowy dla funkcji. Sprawdz przypisywanie parametrow.

function [par1,par2] = Sprawozdanie_Piotr_Zakrzewski_27_11_17r(p,a,L)
% domyslnie:
% p = 1; a = 100; L = 1000;

if ~exist('p','var')
    p = 1;
end
 
if ~exist('a','var')
    a = 100;
end

if ~exist('L','var')
    x=linspace(-pi/2,pi/2,1000);
end
 
if exist('L','var')
    x=linspace(-pi/2,pi/2,L);
end

par1 = 123*a;
par2 = 123.*x;
 
y=((cos(x.*p).^0.5).*cos(a.*x)+(abs(x).^0.5)).*(4-x.^2).^0.1;
plot(x,y);
hold on;

%% Wnioski - podsumowanie
% Zadania mialy na celu nauczenie tworzenia funkcji.