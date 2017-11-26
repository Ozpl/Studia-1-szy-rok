%% Zakrzewski Piotr 42033 AR17L Pon_10-12 zp42033@zut.edu.pl 
% LAB_7: *Grafika 3D kontynuacja* 20.11.2017
%
% *Celem* cwiczenia jest nabycie umiejetnosci tworzenia wykresow 3D funkcji niezwektoryzowanych, zapoznanie sie z funkcjami i mozliwosciami graficznymi dostepnymi w programie Matlab.
%
% 42033 - nr albumu, AR17L - kierunek AR, rok 1, grupa 7, forma zajec L, termin zajec poniedzialek 10-12 
% 
% LAB_7, Grafika 3D kontynuacja, 20.11.17r.

%% Zadanie 2
% Wykonaj wykres funkcji danej w postaci sumy kwadratow
% $$ J(a,b) = \sum (a \cdot x_i + b - y_i)^2 $$
% gdzie xi=0:4
% yi=4*xi+1+randn(size(xi))
% Wskazowka dokonaj wektoryzacji funkcji J(a,b) tak aby dzialala dla argumentow tablicowych
% a i b przy uzyciu petli for lub funkcji arrayfun.

x = 0:1:4;
y = 4*x + 1 + randn(size(x));
dl = 10;
a = linspace(-5,5,dl);
b = linspace(-5,5,dl);

for ia=1:dl
    for ib=1:dl
        kw = (a(ia) * x + b(ib) - y).^2;
        J(ia,ib) = sum(kw);
    end
end

[aa,bb] = meshgrid(a,b);
mesh(aa,bb,J);

x = -5:1:5;
y = 4*x + 1 + randn(size(x));
dl = 11;
a = linspace(-5,5,dl);
b = linspace(-5,5,dl);

for ia=1:dl
    for ib=1:dl
        bez = abs((a(ia) * x + b(ib) - y));
        J(ia,ib) = sum(bez);
    end
end

[aa,bb] = meshgrid(a,b);
mesh(aa,bb,J);

%% Zadanie 4
% Narysuj powierzchnie funkcji o nierownomiernie rozlozonych wartosciach x i y zgodnie z
% nastepujacym schematem:
% x=rand(100,1)*16-8
% y=rand(100,1)*16-8
% r=sqrt(x.^2+y.^2)+eps
% z=sin(r)./r
% Do wykonania zadania wygeneruj pomocnicza siatke prostokatna oraz funkcje griddata do
% wyznaczenia wspolrzednych punktow na siatce pomocniczej.
% Z=griddata(x,y,z,X,Y,'cubic')
% nastepnie zaznacz wyznaczone punkty x,y,z przy uzyciu funkcji hold on i
% plot3(x,y,z,'.','MarkerSize',15)
% Opisz dzialanie poszczegolnych komend.

x = rand(100,1)*16-8;
y = rand(100,1)*16-8;

xp = linspace(-8,8,500);
yp = linspace(-8,8,500);

r = sqrt(x.^2+y.^2) + eps;
z = sin(r)./r;

[XP,YP] = meshgrid(xp,yp);
Z = griddata(x,y,z,XP,YP,'v4');

figure;
plot3(x,y,z,'.','MarkerSize',25);
hold on;
mesh(XP,YP,Z);

%% Zadanie 6
% Narysuj wykres powierzchni 3D
% [X,Y,Z] = peaks(50);
% mesh(Z);
% Narysuj przekroje 2D powyzszego wykresu w zakresie <-3,3> dla:
% Wskazowka – skorzystaj z komendy interpn lub griddata

[X,Y] = meshgrid(1:50);
Z = peaks(50);

% podpunkt a)
% x=0

figure;
mesh(Z);
hold on
patch([0,0,50,50],[0,0,0,0],[10,-10,-10,10],'w','FaceAlpha',0.7);
plot3([0,0],[0,0],[-10,10],'r','linewidth',3);
title('x = 0');

x1 = 1:1:1000;
x1(1,:) = 0;
y1 = linspace(0,50,1000);

x2 = linspace(-3,3,1000);
z2 = interp2(X,Y,Z,x1,y1);

figure;
plot(x2,z2);
title('x = 0');

% podpunkt b)
% y=0

figure;
mesh(Z);
hold on
patch([0,0,0,0],[0,0,50,50],[10,-10,-10,10],'w','FaceAlpha',0.7);
plot3([0,0],[0,0],[-10,10],'r','linewidth',3);
title('y = 0');

x1 = linspace(0,50,1000);
y1 = 1:1:1000;
y1(1,:) = 0;

x2 = linspace(-3,3,1000);
z2 = interp2(X,Y,Z,x1,y1);

figure;
plot(x2,z2);
title('y = 0');

% podpunkt c)
% c) x=y

figure;
mesh(Z);
hold on;
patch([0,0,50,50],[0,0,50,50],[10,-10,-10,10],'w','FaceAlpha',0.7);
plot3([0,0],[0,0],[-10,10],'r','linewidth',3);
title('x = y');

x1 = linspace(0,50,1000);
y1 = linspace(0,50,1000);

x2 = linspace(-3,3,1000);
z2 = interp2(X,Y,Z,x1,y1);

figure;
plot(x2,z2);
title('x = y');

% podpunkt d)
% d) y=2x-1

figure;
mesh(Z);
hold on
patch([0,0,25.5,25.5],[0,0,50,50],[10,-10,-10,10],'w','FaceAlpha',0.7);
plot3([0,0],[0,0],[-10,10],'r','linewidth',3);
title('y = 2x-1');
xlabel('x');
ylabel('y');

x1 = linspace(0,25.5,1000);
y1 = linspace(0,50,1000);

x2 = linspace(-3,3,1000);
z2 = interp2(X,Y,Z,x1,y1);

figure;
plot(x2,z2);
title('y = 2x-1');

%% Wnioski - podsumowanie
% Zadania mialy na celu rozwiniecie wiedzy o tworzeniu grafik 3d.