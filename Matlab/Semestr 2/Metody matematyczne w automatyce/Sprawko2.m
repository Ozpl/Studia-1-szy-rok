clear;
close all;

t = -10:0.01:10;

%y(t) = 1 dla (0,pi)
for i=1:1:length(t)
    if t(i) >= 0
        u(i) = 1;
    elseif t(i) < 0
        u(i) = 0;
    end
end
for i=1:1:length(t)
    if t(i) >= pi
        u2(i) = 1;
    elseif t(i) < pi
        u2(i) = 0;
    end
end
figure;
plot(t,u-u2);
xlim([-1 4]);
ylim([-1 2]);

clear;
close all;
%a jako omega we wzorach
a = linspace(-5,5,1000);
%widmo Grzesiu sygnal 1
b = sqrt((-sin(a.*pi)./a).^2+(2*(sin(-pi.*a*0.5).^2)).^2);
figure;
plot(a,b);

%faza Grzesiu sygnal 1
c = atan((2*(sin(-pi.*a*0.5).^2))./(-sin(a.*pi)./a));
figure;
plot(a,c);

syms g;
d = vpaintegral(((sin(g*pi)/g)-(sqrt(-1)*2*(sin(g*pi*0.5))^2))^2,g,0,1);

%widmo Grzesiu sygnal 2
f = abs((-1+(cos(-pi.*a)+1i*sin(-pi.*a)).*(1+a.*sqrt(-1)*pi))./(a.^2*pi));
figure;
plot(a,f);

%faza Grzesiu sygnal 2
h = angle((-1+(cos(-pi.*a)+1i*sin(-pi.*a)).*(1+a.*sqrt(-1)*pi))./(a.^2*pi));
figure;
plot(a,h);

syms f;
j = vpaintegral(((-1+(cos(-pi*f)+sqrt(-1)*sin(-pi*f))*(1+f*sqrt(-1)*pi))/(f^2))^2,f,0,1);

%widmo Piotr sygnal 1
amp1 = abs(sqrt( ( (4.*sin( (pi.*a)/2) ).^4 / a.^2 ) + ( (sin(pi.*a) ).^2 ) ./ (a.^2) ));
figure;
plot(a,amp1);

%faza Piotr sygnal 1
faz1 = ( atan( (-2.*sin( (a.*pi) / (2) ).^2 ) ./ (sin(a.*pi)) ) );
figure;
plot(a,faz1);

syms omega;
pars1 = (1/pi).* vpaintegral(( ( (sin(omega*pi)) / (omega) ) - 1i.*( (2.*sin((omega.*pi) / (2)).^2) / (omega) ) ).^2,omega,0,1);
