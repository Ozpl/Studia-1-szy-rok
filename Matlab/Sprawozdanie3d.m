% x=0:1:4;
% y=4*x+1+randn(size(x));
% dl=10;
% a=linspace(-5,5,dl);
% b=linspace(-5,5,dl);
% 
% for ia=1:dl
%     for ib=1:dl
%         kw = (a(ia) * x + b(ib) - y).^2;
%         J(ia,ib) = sum(kw);
%     end
% end
% 
% [aa,bb] = meshgrid(a,b);
% mesh(aa,bb,J);
% 
% x = -5:1:5;
% y = 4*x + 1 + randn(size(x));
% dl = 11;
% a = linspace(-5,5,dl);
% b = linspace(-5,5,dl);
% 
% for ia=1:dl
%     for ib=1:dl
%         bez = abs((a(ia) * x + b(ib) - y));
%         J(ia,ib) = sum(bez);
%     end
% end
% 
% [aa,bb] = meshgrid(a,b);
% mesh(aa,bb,J);
x=rand(100,1)*16-8;
y=rand(100,1)*16-8;
xp = linspace(-8,8,500);
yp = linspace(-8,8,500);
r=sqrt(x.^2+y.^2)+eps;
z=sin(r)./r;
[XP,YP] = meshgrid(xp,yp);
Z=griddata(x,y,z,XP,YP,'v4');
plot3(x,y,z,'.','MarkerSize',25);
hold on;
mesh(XP,YP,Z);