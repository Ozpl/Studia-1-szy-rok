clear;
close all;

syms t s alpha omega;
skok = heaviside(t);

f1 = skok;
F1 = laplace(f1);

f2 = s*skok;
F2 = laplace(f2);

f3 = exp(-alpha*t)*skok;
F3 = laplace(f3);

f4 = cos(alpha*t)*skok;
F4 = laplace(f4);

f5 = sin(alpha*t)*skok;
F5 = laplace(f5);

f6 = t^2*skok;
F6 = laplace(f6);

f7 = cos(omega*t)*exp(-alpha*t)*skok;
F7 = laplace(f7);

f8 = (t+t*exp(-alpha*t))*skok;
F8 = laplace(f8);

f9 = (1+2*t+4*t^2)*skok;
F9 = laplace(f9);

f10 = (2*t+3)*skok;
F10 = laplace(f10);

f11 = (2*exp(-3*t) + 1)*skok;
F11 = laplace(f11);