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