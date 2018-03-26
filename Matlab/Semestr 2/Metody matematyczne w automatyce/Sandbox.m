clear;
close all;
a = linspace(-5,5,1000);

b = sqrt((-sin(a.*pi)./a).^2+(2*(sin(-pi.*a*0.5).^2)).^2);
figure;
plot(a,b);

c = atan((2*(sin(-pi.*a*0.5).^2))./(-sin(a.*pi)./a));
figure;
plot(a,c);

syms g;
d = vpaintegral(((sin(g*pi)/g)-(sqrt(-1)*2*(sin(g*pi*0.5))^2))^2,g,0,1);

f = abs((-1+(cos(-pi.*a)+1i*sin(-pi.*a)).*(1+a.*sqrt(-1)*pi))./(a.^2*pi));
figure;
plot(a,f);

h = angle((-1+(cos(-pi.*a)+1i*sin(-pi.*a)).*(1+a.*sqrt(-1)*pi))./(a.^2*pi));
figure;
plot(a,h);

syms f;
j = vpaintegral(((-1+(cos(-pi*f)+sqrt(-1)*sin(-pi*f))*(1+f*sqrt(-1)*pi))/(f^2))^2,f,0,1);

amp1 = abs(sqrt( ( (4.*sin( (pi.*a)/2) ).^4 / a.^2 ) + ( (sin(pi.*a) ).^2 ) ./ (a.^2) ));
figure;
plot(a,amp1);

faz1 = ( atan( (-2.*sin( (a.*pi) / (2) ).^2 ) ./ (sin(a.*pi)) ) );

figure;
plot(a,faz1);

syms omega;
pars1 = (1/pi).* vpaintegral(( ( (sin(omega*pi)) / (omega) ) - 1i.*( (2.*sin((omega.*pi) / (2)).^2) / (omega) ) ).^2,omega,0,1)

