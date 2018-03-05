clear;
close all;

t = -10:0.01:10;

%y(t) = u(t) & y(t) = t*u(t)
for i=1:1:length(t)
    if t(i) >= 0
        u(i) = 1;
    elseif t(i) < 0
        u(i) = 0;
    end
end
r = t.*u;
plot(t,u);
legend('y(t) = u(t)');
figure;
plot(t,r);
legend('y(t) = t*u(t)');

%y(t) = 2*u(t)
for i=1:1:length(t)
    if t(i) >= 0
        u(i) = 2;
    elseif t(i) < 0
        u(i) = 0;
    end
end
figure;
plot(t,u);
legend('y(t) = 2*u(t)');

%y(t) = u(t-2)
for i=1:1:length(t)
    if t(i) >= 2
        u(i) = 1;
    elseif t(i) < 2
        u(i) = 0;
    end
end
figure;
plot(t,u);
legend('y(t) = u(t-2)');

%y(t) = u(t-3) - u(t-2)
for i=1:1:length(t)
    if t(i) >= 3
        u(i) = 1;
    elseif t(i) < 3
        u(i) = 0;
    end
end
for i=1:1:length(t)
    if t(i) >= 2
        u2(i) = 1;
    elseif t(i) < 0
        u2(i) = 0;
    end
end
figure;
plot(t,u-u2);
legend('y(t) = u(t-3) - u(t-2)');

%y(t) = u(t-1) + u(t-3)
for i=1:1:length(t)
    if t(i) >= 1
        u(i) = 1;
    elseif t(i) < 1
        u(i) = 0;
    end
end
for i=1:1:length(t)
    if t(i) >= 3
        u2(i) = 1;
    elseif t(i) < 3
        u2(i) = 0;
    end
end
figure;
plot(t,u+u2);
legend('y(t) = u(t-1) + u(t-3)');

%y(t) = 2*u(t-1) + 3*u(t) - 4*u(t-2)
for i=1:1:length(t)
    if t(i) >= 1
        u(i) = 1;
    elseif t(i) < 1
        u(i) = 0;
    end
end
for i=1:1:length(t)
    if t(i) >= 0
        u2(i) = 1;
    elseif t(i) < 0
        u2(i) = 0;
    end
end
for i=1:1:length(t)
    if t(i) >= 2
        u3(i) = 1;
    elseif t(i) < 2
        u3(i) = 0;
    end
end
figure;
plot(t,2.*u+3.*u2-4.*u3);
legend('2*u(t-1) + 3*u(t) - 4*u(t-2)');

%y(t) = u(t) - r(t)
for i=1:1:length(t)
    if t(i) >= 0
        u(i) = 1;
    elseif t(i) < 0
        u(i) = 0;
    end
end
r = t.*u;
plot(t,u-r);
legend('y(t) = u(t) - r(t)');

%y(t) = 2*r(t)
for i=1:1:length(t)
    if t(i) >= 0
        u(i) = 1;
    elseif t(i) < 0
        u(i) = 0;
    end
end
r = t.*u;
figure;
plot(t,2.*r);
legend('y(t) = 2*r(t)');

%y(t) = r(t) + 2*r(t-2)
for i=1:1:length(t)
    if t(i) >= 0
        u(i) = 1;
    elseif t(i) < 0
        u(i) = 0;
    end
end
r = t.*u;
for i=1:1:length(t)
    if t(i) >= 2
        u2(i) = 1;
    elseif t(i) < 2
        u2(i) = 0;
    end
end
r2 = (t-2).*u2;
figure;
plot(t,r+2.*r2);
legend('y(t) = r(t) + 2*r(t-2)');

%y(t) = r(t-1) + r(t-2)
for i=1:1:length(t)
    if t(i) >= 1
        u(i) = 1;
    elseif t(i) < 1
        u(i) = 0;
    end
end
r = (t-1).*u;
for i=1:1:length(t)
    if t(i) >= 2
        u2(i) = 1;
    elseif t(i) < 2
        u2(i) = 0;
    end
end
r2 = (t-2).*u2;
figure;
plot(t,r+r2);
legend('y(t) = r(t-1) + r(t-2)');

%y(t) = 2*r(t-2) + 2*r(t-3)
for i=1:1:length(t)
    if t(i) >= 2
        u(i) = 1;
    elseif t(i) < 2
        u(i) = 0;
    end
end
r = (t-2).*u;
for i=1:1:length(t)
    if t(i) >= 3
        u2(i) = 1;
    elseif t(i) < 3
        u2(i) = 0;
    end
end
r2 = (t-3).*u2;
figure;
plot(t,2.*r+2.*r2);
legend('y(t) = 2*r(t-2) + 2*r(t-3)');

%y(t) = sin(t) * e^{-t} * u(t)
for i=1:1:length(t)
    if t(i) >= 0
        u(i) = 1;
    elseif t(i) < 0
        u(i) = 0;
    end
end
figure;
plot(t,sin(t) .* exp(-t) .* u);
legend('y(t) = sin(t) * e^{-t} * u(t)');

%y(t) = cos(2*t) * e^{-1/2*t} * u(t)
for i=1:1:length(t)
    if t(i) >= 0
        u(i) = 1;
    elseif t(i) < 0
        u(i) = 0;
    end
end
figure;
plot(t,cos(2.*t) .* exp(-(1/2).*t) .* u);
legend('cos(2*t) * e^{-1/2*t} * u(t)');

%y(t) = (1-e^{-2*t}) * sin(2*t) * u
for i=1:1:length(t)
    if t(i) >= 0
        u(i) = 1;
    elseif t(i) < 0
        u(i) = 0;
    end
end
figure;
plot(t,(1 - exp(-2.*t)) .* sin(2.*t) .* u);
legend('y(t) = (1-e^{-2*t}) * sin(2*t) * u');
