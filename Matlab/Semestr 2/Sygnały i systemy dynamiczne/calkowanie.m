function u = calkowanie(t)

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
%trzeba zmienic wzor pod spodem dla roznych calek
u = 2.*exp(-t) - 6.*exp(-2.*t);

u = u.^2;