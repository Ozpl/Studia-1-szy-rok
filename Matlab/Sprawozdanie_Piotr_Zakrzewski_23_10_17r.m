%% Zakrzewski Piotr 42033 AR17L Pon_10-12 zp42033@zut.edu.pl 
% LAB_4: *Grafika 2D* 23.10.2017
%
% *Celem* cwiczenia jest nabycie umiejetnosci tworzenia wykresow funkcji 2D, zapoznanie sie z funkcjami i mozliwosciami graficznymi dostepnymi w programie Matlab oraz opanowanie umiejetnosci generowania i prezentacji sygnalow
%
% 42033 - nr albumu, AR17L - kierunek AR, rok 1, grupa 7, forma zajec L, termin zajec poniedzialek 10-12 
% 
% LAB_4, Grafika 2D, 23.10.17r.


%% Zadanie 1: funkcje
% Narysuj funkcje x, x^3, e^x i e^x2 w przedziale 0 < x < 4 na wykresie...

% Podpunkt 1a
% ...prostokatnym

x = linspace(0,4,1000);

y1 = x;
y2 = x.^3;
y3 = exp(x);
y4 = exp(2*x);

figure;

plot(x,y1,'r');
hold on;
plot(x,y2,'k');
plot(x,y3,'g');
plot(x,y4,'b');

title('Wykres prostokatny');
axis([0 4 0 10]);
xlabel('Os x');
ylabel('Os y');
legend('x','x^3','e^x','e^{x2}');

% Podpunkt 1b
% ...pollogarytmicznym (logarytm na osi y)

figure;

semilogy(x,y1,'r');
hold on;
semilogy(x,y2,'k');
semilogy(x,y3, 'g');
semilogy(x,y4, 'b');

title('Wykres pollogarytmiczny y');
xlabel('Os x');
ylabel('Os y');
legend('x','x^3','e^x','e^{x2}');

% Podpunkt 1c
% ...logarytmicznym

figure;

loglog(x,y1,'r');
hold on;
loglog(x,y2,'k');
loglog(x,y3,'g');
loglog(x,y4,'b');

title('Wykres logarytmiczny');
xlabel('Os x');
ylabel('Os y');
legend('x','x^3','e^x','e^{x2}');

%% Zadanie 2: funkcje
% 2. Wykresl na jednym wykresie funkcje:

% Podpunkt 2a
% a) y=sin(x) - linia ciagla

a = linspace(0,5,20);
b = sin(a);

figure;
plot(a,b);
hold on;

axis([0 5 -2 10]);

% Podpunkt 2b
% b) y=x - linia przerywana
c = linspace(0,5,20);
d = c;
plot(c,d,'--');

axis([0 5 -2 10]);

% Podpunkt 2c
% y=x-x^3/6+x^5/120 - kolka

e = linspace(0,5,20);
f = e - e.^3./6 + e.^5./120;
plot(e,f,'-o');

title('Wykresy funkcji');
axis([0 5 -2 10]);
xlabel('Os X');
ylabel('Os Y');
legend('y = sin(x)','y = x','y = x - x^3/6 + x^5/120');

%% Zadanie 3: wykresy
% Wykonaj dla danych podanych przez prowadzacego wykresy:

% Podpunkt 3a
% kola (pelne w srodku) - wykres powierzchniowy

figure;

k = 12;
l = 10;
kat = 0 : 0.01 : 2*pi;
pr = 5;

x = pr * cos(kat) + k;
y = pr * sin(kat) + l;

plot(x, y);
axis square;
xlim([0 20]);
ylim([0 20]);

% Podpunkt 3b
% chmury losowej � scatter

figure;
k = randperm(150,150);
l = randperm(150,150);
scatter(k,l);
axis ([0 150 0 150]);

% Podpunkt 3c
% wykres kolowy 2D i 3D, procentowy i wartosciach dowolnych + opisy osi

figure;
m = [3 0.5 2 7 6];
pie(m);

figure;
pie3(m);

% Podpunkt 3d
% wykres slupkowy

figure;
n = [2 3 5 9 18 1 5 4 4 3 8 15 10];
bar(n);

% Podpunkt 3e
% i inne stairs, stem

figure;
o = linspace(0.7*pi,20);
o = sin(o);
stairs(o);

figure;
p = linspace(1.3*pi,15);
p = cos(p);
stem(p);

%% Wnioski - podsumowanie
% Zadania mialy na celu nauczenia wyrysowywania wykresow, ich opisywania oraz manipulacji danymi w nich zawartych.