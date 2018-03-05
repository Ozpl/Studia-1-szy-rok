close all;

%1
t = linspace(0,100,1000);
a = rand(1)*10;

x = a*t.*cos(t);
y = a*t.*sin(t);
z = t;

figure;
plot3(x,y,z);

%2
x = linspace(-10,10,10);
y = linspace(-10,10,10);
x = -10:1:10;
y = -10:1:10;

[X,Y] = meshgrid(x,y);
z = (sin(X.*Y))./(X.*Y);

dlx = length(x);
dly = length(y);

for i = 1:dlx
   for j = 1:dly 
     il = x(i).*y(j);
     z(i,j) = sin(il)./il;
   end;
end;

figure;
mesh(X,Y,z);
figure;
meshc(X,Y,z);
figure;
meshz(X,Y,z);
figure;
surfc(X,Y,z);
figure;
surf(X,Y,z);
figure;
surfc(z);
figure;
contour3(X,Y,z);
figure;
contour(X,Y,z,100);
figure;
[C,h] = contour(X,Y,z,10);
clabel(C,h)
figure;
tri = delaunay(X,Y)
trimesh(tri,X,Y,z)
figure;
surfl(X,Y,z,[0,0,10])
%3

x = linspace(-5,5,20);
y = linspace(-5,5,20);
[X,Y] = meshgrid(x,y);
z = (cos(X.^2+Y.^2))./(X.^2+Y.^2);
figure;
surf(X,Y,z);

