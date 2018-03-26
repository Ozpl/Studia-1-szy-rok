%% Nazwisko Imi� 55555 AR21L �ro_12-14 user@gmail.com 
% LAB_1: *Wprowadzenie do programu Matlab* 07.10.2017
%
% *Celem* niniejszego �wiczenia jest wykonanie kilkunastu prostych zada� na
% macierzach i wektorach... (opis celu �wiczenia lub projektu).
%
% 55555 - nr albumu, AR21L - kierunek AR, rok 2, grupa 1, forma zaj�� L, termin zaj�� �roda 12-14 
% 
% w drugiej linii nr �wiczenia LAB_1 (PROJ_4), nazwa, data wykonania (LAB)
% lub wydania zadania (PROJ)
% publish('NAZWAPLIKU'), wydrukuj na drukarce lub do pliku np. do PrimoPDF
% b�d� zapisz. Pliki html mo�na edytowa� r�wnie� programem MS Word.


%% Zadanie 1: wektory
% 
% Zdefiniuj wektor a postaci:
%
% $$a = [1,2,4,...,64]$$

a=2.^(0:6)

%% Zadanie 2: macierze
% Zdefiniuj macierz diagonaln� posiadaj�c� na przekatnej elementy z wektora
% a z zadania 1.
%
% $${\bf{A}} = \left[ {\begin{array}{*{20}c}
%   {a_1 } & {0}  \\
%   0 & {a_2 }  \\
% \end{array}} \right]$$
%
% $${\bf{A}} = \left[ {\begin{array}{*{20}c}
%   {a_1 } & 0 & 0  \\
%   0 &  \ddots  & 0  \\
%   0 & 0 & {a_n }  \\
% \end{array}} \right]$$

A=diag(a)

%% Zadanie 3: wykres
% Narysuj wykres 3D macierzy A z zadania 2.

surfl(A)

%% Wnioski - podsumowanie
% Wnioski do wykonanej pracy i otrzymanych wynik�w. W powy�szym sprawozdaniu
% np. dyskusja czy otrzymany wykres 3D odpowiada naszym oczekiwaniom,
% dlaczego ?