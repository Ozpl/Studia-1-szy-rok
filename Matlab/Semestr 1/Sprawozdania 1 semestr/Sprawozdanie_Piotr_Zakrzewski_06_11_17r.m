%% Zakrzewski Piotr 42033 AR17L Pon_10-12 zp42033@zut.edu.pl 
% LAB_6: *Grafika 3D* 06.11.2017
%
% *Celem* cwiczenia jest nabycie umiejetnosci tworzenia wykresow funkcji 3D, zapoznanie sie z funkcjami i mozliwosciami graficznymi dostepnymi w programie Matlab.
%
% 42033 - nr albumu, AR17L - kierunek AR, rok 1, grupa 7, forma zajec L, termin zajec poniedzialek 10-12 
% 
% LAB_6, Grafika 3D, 06.11.17r.

%% Zadanie 1
% Narysuj przy pomocy komendy plot3 wykres linii w przestrzeni dany w postaci parametrycznej:

% x=a*t*cos(t)
% y=a*t*sin(t)
% z=t
% a - dowolna wartosc w przedziale 1-10
% t – wektor 1000 punktow w przedziale 0-100

t = linspace(0,100,1000);
a = rand(1)*10;

x = a*t.*cos(t);
y = a*t.*sin(t);
z = t;

figure;
plot3(x,y,z);

%% Zadanie 2
% Narysuj wykres powierzchni w przestrzeni 3D opisanej zaleznoscia z=sin(x*y)/(x*y) dla wartosci x i y w zakresie -10,10

% Opisz dzialanie komend realizujacych powyzsze zadanie

x = linspace(-10,10,100);
y = linspace(-10,10,100);

[X,Y] = meshgrid(x,y);

dlx = length(x);
dly = length(y);

for i = 1:dlx
   for j = 1:dly
     il = x(i).*y(j);
     Z(i,j) = sin(il)./il;
   end
end

% Wykonaj nastepujace wykresy i wskaz roznice
% mesh(X,Y,Z)

figure;
mesh(X,Y,Z); %komenda "mesh(X,Y,Z)" tworzy oparty na siatce wykres 3d, w ktorym kolor zalezy od wysokosci Z


% meshc(X,Y,Z)

figure;
meshz(X,Y,Z); %komenda "meshc(X,Y,Z)" dodaje kontur pod wykresem


% meshz(X,Y,Z)

figure;
surfc(X,Y,Z); %komenda "meshz(X,Y,Z)" dodaje kurtyne wokol wykresu


% surf(X,Y,Z)

figure;
surf(X,Y,Z); %komenda "surf(X,Y,Z)" tworzy wykres powierzchniowy


% surfc(Z)

figure;
surfc(Z); %komenda "surfc(Z)" tworzy kontur pod wykresem


% contour3(X,Y,Z)

figure;
contour3(X,Y,Z); %komenda "contour3(X,Y,Z)" tworzy wykres konturowy w 3d


% contour(X,Y,Z,100)

figure;
contour(X,Y,Z,100); %komenda "contour(X,Y,Z,n)" tworzy wykres konturowy macierzy o 100 konturach


% [C,h]=contour(X,Y,Z,10)
% clabel(C,h)

figure;
[C,h] = contour(X,Y,Z,10);
clabel(C,h) %komenda "[C,h]=contour(X,Y,Z,n)" tworzy wykres konturowy, a "clabel(C,h)" podpisuje kontury


% tri=delaunay(X,Y)
% trimesh(tri,X,Y,Z)

figure;
tri = delaunay(X,Y);
trimesh(tri,X,Y,Z); % komenda "tri=delaunay(X,Y)" tworzy triangulacje Delone'a w 2d, a "trimesh(tri,X,Y,Z)" tworzy wykres


% surfl(X,Y,Z,[0,0,10])

figure;
surfl(X,Y,Z,[0,0,10]); %komenda "surfl(X,Y,Z,s)" tworzy wykres powierzchniowy oparty o kolormape oparta o oswietlenie umieszczone w punkcie s

%% Zadanie 3
% Narysuj wykres powierzchni z=cos(x^2+y^2)/(x^2+y^2) dla wartosci x i y w zakresie -5,5

x = linspace(-5,5,100);
y = linspace(-5,5,100);
z = cos(x.^2.+y.^2) ./ (x.^2.+y.^2);

figure;
plot3(x,y,z);
view([30,25]);

%% Zadanie 8
% Sprawdz i opisz dzialanie instrukcji sluzacych do wygladzania i formatowania wykresow powierzchni 3D. Ponizsze komendy prosze wpisywac pojedynczo, obserwujac zmiany i opisujac dzialanie poszczegolnych komend:

% Z = peaks(20);
x = linspace(-10,10,20);
y = linspace(-10,10,20);
[X,Y] = meshgrid(x,y);

figure;
Z = peaks(20);
mesh(X,Y,Z); %komenda "peaks(n)" tworzy macierz n-na-n


% surf(Z);

figure;
h = surf(Z); %komedna "surf(Z)" tworzy wykres powierzchniowy


% colormap hot

colormap hot; %komenda "colormap map" zmienia palete barw wykresu


% shading interp

shading interp; %komenda "shading interp" zmienia cieniowanie wykresu, "zlewajac" ze soba kolory


% set(h,'EdgeColor','k')

set(h,'EdgeColor','k'); %komenda "set(H,Name,Value)" podstawia podane wlasciwosci graficzne do wykresu


% light('Position',[-2,2,20])

light('Position',[-2,2,20]); %komenda "light('PropertyName',propertyvalue,...)" tworzy swiatlo w wybranym miejscu


% lighting phong

lighting phong; %komenda "lighting phong" zmienia algorytm oswietlenia na ten opisany przez Phonga


% material([0.4,0.6,0.5,30])

material([0.4,0.6,0.5,30]); %komenda "material([ka kd ks n])" zmienia odbijanie sie swiatla od powierzchni


% set(h,'FaceColor',[0.7 0.7 0],'BackFaceLighting','lit')

set(h,'FaceColor',[0.7 0.7 0],'BackFaceLighting','lit'); %komenda "set(H,Name,Value)" podstawia podane wlasciwosci graficzne do wykresu


% view([30,25])

view([30,25]); %komenda "view([az,el])" zmienia punkt widzenia, z ktorego patrzymy na wykres


% set(gca,'CameraViewAngleMode','Manual')

set(gca,'CameraViewAngleMode','Manual'); %komenda "set(H,Name,Value)" podstawia podane wlasciwosci graficzne do wykresu


% set(gca,'ZTickLabel','Negative||Positive')

set(gca,'ZTickLabel','Negative||Positive'); %komenda "set(H,Name,Value)" podstawia podane wlasciwosci graficzne do wykresu


% xlabel('Os X')

xlabel('Os X'); %komenda "xlabel(txt)" podpisuje os X podana fraza


% ylabel('Os Y')

ylabel('Os Y'); %komenda "ylabel(txt)" podpisuje os X podana fraza


% zlabel('Wartosci funkcji')

zlabel('Wartosci funkcji'); %komenda "zlabel(txt)" podpisuje os X podana fraza


% title('Peaks')

title('Peaks'); %komenda "title(txt)" podpisuje caly wykres


%% Wnioski - podsumowanie
% Zadania cwiczyly znajomosc rysowania wykresow w 3d oraz ich transformowania.