clear;
close all;
t = linspace(-15,15,1000);

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

omega = 1;
f = (sin(omega.*pi)/omega) - j .* (2.*(sin(omega.*pi/2)).^2/omega);
z = abs(sqrt((sin(omega.*t)/omega).^2 + (2.*sin((omega.*t)/2)/omega).^2));
z2 = angle((-2*(sin((omega*pi)/2)).^2) / sin(omega*pi));
p = pi;
figure;
plot(t,z);

syms omega t;
z = abs(sqrt((sin(omega.*t)/omega).^2 + (2.*sin((omega.*t)/2)/omega).^2));
z2 = angle((-2*(sin((omega*pi)/2)).^2) / sin(omega*pi))
E = vpaintegral((z^2),-1,1);

close all;