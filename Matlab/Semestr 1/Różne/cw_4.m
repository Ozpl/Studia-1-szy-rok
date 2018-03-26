close all;

%1a
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

title('Wykres prostok¹tny');
axis([0 4 0 10]);
xlabel('Oœ x');
ylabel('Oœ y');
legend('x','x^3','e^x','e^{x2}');

%1b
figure;

semilogy(x,y1,'r');
hold on;
semilogy(x,y2,'k');
semilogy(x,y3, 'g');
semilogy(x,y4, 'b');

title('Wykres pó³logarytmiczny y');
xlabel('Oœ x');
ylabel('Oœ y');
legend('x','x^3','e^x','e^{x2}');

%1c
figure;

loglog(x,y1,'r');
hold on;
loglog(x,y2,'k');
loglog(x,y3,'g');
loglog(x,y4,'b');

title('Wykres logarytmiczny');
xlabel('Oœ x');
ylabel('Oœ y');
legend('x','x^3','e^x','e^{x2}');

%2a
a = linspace(0,5,20);
b = sin(a);

figure;
plot(a,b);

axis([0 5 -2 10]);
hold on;
%Taylor!!!

%2b
c = linspace(0,5,20);
d = c;
plot(c,d,'--');

axis([0 5 -2 10]);

%2c
e = linspace(0,5,20);
f = e - e.^3./6 + e.^5./120;
plot(e,f,'-o');

title('Wykresy funkcji');
axis([0 5 -2 10]);
xlabel('Oœ X');
ylabel('Oœ Y');
legend('y = sin(x)','y = x','y = x - x^3/6 + x^5/120');

%3a
figure;

g=-pi:0.01:pi;

h=sin(g);
i=cos(g);

j = area(h,i);
axis ([-2 2 -2 2]);

%3b
figure;
k = randperm(150,150);
l = randperm(150,150);
scatter(k,l);
axis ([0 150 0 150]);

%3c
figure;
m = [3 0.5 2 7 6];
pie(m);

figure;
pie3(m);

%3d
figure;
n = [2 3 5 9 18 1 5 4 4 3 8 15 10];
bar(n);

%3e
figure;
o = linspace(0.7*pi,20);
o = sin(o);
stairs(o);

figure;
p = linspace(1.3*pi,15);
p = cos(p);
stem(p);
