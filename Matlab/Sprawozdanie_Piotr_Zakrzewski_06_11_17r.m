%% Zakrzewski Piotr 42033 AR17L Pon_10-12 zp42033@zut.edu.pl 
% LAB_6: *Grafika 3D* 06.11.2017
%
% *Celem* �wiczenia jest nabycie umiej�tno�ci tworzenia wykres�w funkcji 3D, zapoznanie si� z funkcjami i mo�liwo�ciami graficznymi dost�pnymi w programie Matlab.
%
% 42033 - nr albumu, AR17L - kierunek AR, rok 1, grupa 7, forma zajec L, termin zajec poniedzialek 10-12 
% 
% LAB_6, Generowanie sygnalow, 06.11.17r.

%% Zadanie 1
% Narysuj przy pomocy komendy plot3 wykres linii w przestrzeni dany w postaci parametrycznej:

% x=a*t*cos(t)
% y=a*t*sin(t)
% z=t
% a - dowolna warto�� w przedziale 1-10
% t � wektor 1000 punkt�w w przedziale 0-100

t = linspace(0,100,1000);
a = rand(1)*10;

x = a*t.*cos(t);
y = a*t.*sin(t);
z = t;

figure;
plot3(x,y,z);

%% Zadanie 2
% Narysuj wykres powierzchni w przestrzeni 3D opisanej zale�no�ci� z=sin(x*y)/(x*y) dla warto�ci x i y w zakresie <-10,10>

% Opisz dzia�anie komend realizuj�cych powy�sze zadanie

x = linspace(-10,10,100);
y = linspace(-10,10,100);

[X,Y] = meshgrid(x,y);

dlx = length(x);
dly = length(y);

for i = 1:dlx
   for j = 1:dly 
     il = x(i).*y(j);
     Z(i,j) = sin(il)./il;
   end;
end;

% Wykonaj nast�puj�ce wykresy i wska� r�nice
% mesh(X,Y,Z)

figure;
mesh(X,Y,Z);

% meshc(X,Y,Z)

figure;
meshz(X,Y,Z);

% meshz(X,Y,Z)

figure;
surfc(X,Y,Z);

% surf(X,Y,Z)

figure;
surf(X,Y,Z);

% surfc(Z)

figure;
surfc(Z);

% contour3(X,Y,Z)

figure;
contour3(X,Y,Z);

% contour(X,Y,Z,100)

figure;
contour(X,Y,Z,100);

% [C,h]=contour(X,Y,Z,10)
% clabel(C,h)

figure;
[C,h] = contour(X,Y,Z,10);
clabel(C,h)

% tri=delaunay(X,Y)
% trimesh(tri,X,Y,Z)

figure;
tri = delaunay(X,Y);
trimesh(tri,X,Y,Z);

% surfl(X,Y,Z,[0,0,10])

figure;
surfl(X,Y,Z,[0,0,10]);









%% Wnioski - podsumowanie
% Zadania mialy nauczyc podstawowych komend pozwalajace generowac sygnaly.