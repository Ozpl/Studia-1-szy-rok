%%Krystian Naszko 41999 AR17L Pi¹_10-12 nk41999@zut.edu.pl
%LAB_3 Podstawowe dzialania tablicowe i macierzowe
%1 x=(32:2:74); 
%2 X=magic(5); 
%a X+16; 
%b a=[1,3,5]; X(a,a)=X(a,a)+3; 
%c X.^0.5; 
%d X.^2; 
%e X^2; 
%3 x=[3 2 6 8]'; y=[4 1 3 5]'; 
%a y+sum(x); 
%b x.^y; 
%c y./x; 
%d z=x.*y;
 %e w=sum(z); 
%f x'*y-w; 
%Iloczyn macierzy 1x4 i odwrotnoœci macierzy 1x4 jest równy sumie iloczynu jego poszczególnych elementów 
%4a X=zeros(100); X(1,1)=100; 
%b B=randi([1 15],1,5);
%5a 2*50-2+2; x=linspace(2,100,50); 
%b (50-1)*(-2)+10; x=linspace(10,-88,50); 
%c x=1./linspace(1,50,50); 
%c a=linspace(0,49,50); b=linspace(1,50,50); x=a./b; 
%6 n=linspace(1,100,100); xn=((-1).^(n+1))./((2*n-1)); sum(xn); 
%7 x=[3 1 5 7 9 2 6]; 
%a x(1,5); 
%b x(1,2:5); 
%c a=[6 4 2]; x(1,a); 
%d x(1,2:6); 
%e a=[2 4 6]; b=x(1,a); sum(b); 
%f x(4)=[];
%g x=[0,x,0]; 
%8 A=[2 7 9 7;3 1 5 6;8 1 2 5]; 
%a A'; 
%b a=[1 4]; A(1:3,a); 
%c A(2:3,a); 
%d a=reshape(A,1,12); 
%e reshape(a,2,6); 
%f flipud(A); 
%g fliplr(A);
%h c=zeros(1,4); A=[A;c]; 
%i A(2,1:4); 
%j c=A(1:4,4); c=c'; A=[A;c]; 
%k sum(A,2); 
%l sum(A); 
%m sum(sum(A));
%n d=[1:1:5]; d=d'; A=[d,A]; 
%o d=[2 4]; B=A(1:5,d); 
%p d=[1 3 5]; C=A(1:5,d); 
%q x1=A(1,1:5); 
%r y=A(4:5,1:5); 
%9 
%a 2/2*3; 
%2/2=1 1*3=3 
%b 6-2/5+7^2-1; 
%6-0,4+49-1=53.6 
%c 10/2\5-3+2*4; 
%5\5-3+8=6 
%d 3^2/4; 
%9/4=2.25 
%e 3^2^2; 
%9^2=81 
%f 2+round(6/9+3*2)/2-3; 
%round(6,6666)/2-1=7/2-1=3,5-1=2.5 
%g 2+floor(6/9+3*2)/2-3; 
%floor(6,6666)/2-1=6/2-1=3-1=2
 %h 2+ceil(6/9+3*2)/2-3; 
%ceil(6,6666)/2-1=7/2-1=3,5-1=2.5 
%Wniosek: MATLAB jest przydatnym programem ulatwiaj¹cym wykonywanie skomplikowanych dzialan i operacji matematycznych zarowno na macierzach jak i na liczbach.