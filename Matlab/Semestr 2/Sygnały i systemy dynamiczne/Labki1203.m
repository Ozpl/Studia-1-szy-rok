clear;
close all;

t = -10:0.01:10;

%y(t) = 2*u(t) - 2*u(t-6)
for i=1:1:length(t)
    if t(i) >= 0
        u(i) = 1;
    elseif t(i) < 0
        u(i) = 0;
    end
end
for i=1:1:length(t)
    if t(i) >= 6
        u2(i) = 1;
    elseif t(i) < 6
        u2(i) = 0;
    end
end
figure;
plot(t,2*u - 2*u2);
legend('y(t) = 2*u(t) - 2*u(t-6)');

%obliczanie energii sygnalu
u3 = calkowanie(1);
u4 = calkowanie(7);

E = integral(@calkowanie,0,6);      %integral/quad (starsze) - komenda calkowania


clear;
close all;

t = -10:0.01:10;

for i=1:1:length(t)
    if t(i) >= 1
        u(i) = 1;
    elseif t(i) < 1
        u(i) = 0;
    end
end
r1 = (t-1).*u;
for i=1:1:length(t)
    if t(i) >= 2.5
        u(i) = 1;
    elseif t(i) < 2.5
        u(i) = 0;
    end
end
r2 = (t-2.5).*u;
for i=1:1:length(t)
    if t(i) >= 4
        u(i) = 1;
    elseif t(i) < 4
        u(i) = 0;
    end
end
r3 = (t-4).*u;
plot(t,(2/2.5).*r1- (2.*(2/2.5).*r2)+ ((2/2.5).*r3));
%plot(t,((2/2.5).*r1) - (2.*(2/2.5).*r2) + ((2/2.5).*r3));

E = integral(@calkowanie,1,4);



close all;
clear;
t = 0:0.01:10;
%x(t) = 2*e^{-t} - 6*e^{-2t}, t>0
%x(t) = u(t) + r(t-1) - 2*r(t-2) + u(t-3) + 2*r(t-4) - r(t-5) - r(t-6), t>0
figure;
plot(t,2.*exp(-t) - 6.*exp(-2.*t));
E = integral(@calkowanie,0,99999999);