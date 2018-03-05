function [par1,par2] = zakrzewskikucharczyk(p,a,L)
 
 if ~exist('p','var')
     p = 1;
 end
 
  if ~exist('a','var')
        a = 100;
  end

 if ~exist('L','var')
        x=linspace(-pi/2,pi/2,1000);
 end
 
 if exist('L','var')
        x=linspace(-pi/2,pi/2,L);
 end
 
y=((cos(x.*p).^0.5).*cos(a.*x)+(abs(x).^0.5)).*(4-x.^2).^0.1
plot(x,y);
hold on;
par1 = 123*a;
par2 = 123.*x;