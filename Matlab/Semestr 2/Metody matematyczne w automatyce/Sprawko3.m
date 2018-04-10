clear;
close all;

a = linspace(-5,5,1000);
K = 8;

syms omega;

amplit1aom = ( sin(omega.*( (K+1) / (2) )) .* cos((omega.*K)/(2)) ) / (sin(omega/2));
amplit1bom = ( (sin(omega.*( (K+1) / (2) )) .* sin( (omega .* K) / (2) ) ) / (sin(omega/2)) );
amplitom = sqrt(amplit1aom.^2 + amplit1bom.^2)

amplit1a = ( sin(a.*( (K+1) / (2) )) .* cos((a.*K)/(2)) ) / (sin(a/2));
amplit1b = ( (sin(a.*( (K+1) / (2) )) .* sin( (a .* K) / (2) ) ) / (sin(a/2)) );
amplit = abs(sqrt(amplit1a.^2 + amplit1b.^2))
plot(a,amplit);


amp1 = abs(sqrt( ((cos(4.*a).^2.*sin((9.*a)/2).^2)/sin(a/2).^2 + (sin(4.*a).^2.*sin((9.*a)/2).^2)/sin(a/2).^2).^(1/2) ) );
figure;
plot(a,amp1);