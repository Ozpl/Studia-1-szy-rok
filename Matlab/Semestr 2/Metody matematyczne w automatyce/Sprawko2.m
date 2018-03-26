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
% figure;
% plot(t,u-u2);
% xlim([-5 5]);
% ylim([-1 2]);

syms t omega;
f = 1*exp(-1i*omega*t);
F = int(f,t,0,pi);
z = abs(sqrt((sin(omega*t)/omega)^2 + (2*sin((omega*2)/2)/omega)^2));