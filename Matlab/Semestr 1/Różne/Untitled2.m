%1
x = (31:2:74) + 1;
%2
X = magic(5);
%2a
X=X+16;
%2b
X(1,1) = X(1,1) + 3;
X(1,3) = X(1,3) + 3;
X(1,5) = X(1,5) + 3;
X(3,1) = X(3,1) + 3;
X(3,3) = X(3,3) + 3;
X(3,5) = X(3,5) + 3;
X(5,1) = X(5,1) + 3;
X(5,3) = X(5,3) + 3;
X(5,5) = X(5,5) + 3;
%2c
X = sqrt(X);
%2d
X = X .^ 2;
%2e
X = X ^ 2;
%3
x=[3 2 6 8]';
y=[4 1 3 5]';
%3a
a=x+y;
%3b
a=x.^y;
%3c
a=y./x;
%3d
z=x.*y;
%3e
w =sum(z);
%3f
wynik = x' * y - w;

%4a
X = zeros(100);
X(1,1) = 100;
%4b
B=randn(1,5);
B=ceil(B);




%5a
x=linspace(2,100,50);
%k = (n-1) * s + p
%k = 50-1 * 2 + 2
%k = 50-1 * 1/2 + 1  24
%5b
f=linspace(10,-88,50);
%5c
Q = linspace(1,1,50);
W = linspace(1,50,50);
E = Q ./ W;
%5d
H=linspace(0,49,50);
M=linspace(1,50,50);
P= H./M;

%6
t=[1:2./3:67]	%roznica ciagu wynosi 2/3
e=sum(t)

%7a
x = [3 1 5 7 9 2 6];
a = x(5);
%7b
v= x(2:5);
%7c
l= [ x(6) x(4) x(2) ];
%7d
n=x(2:6);
%7e
u = sum(l); %suma parzystych zgadza sie z l
%7f
x(4) = [];
%7g
z = [0];
b = [z x z];

%8a
A=[2 7 9 7; 3 1 5 6; 8 1 2 5];
A=A'
%8B
Y=[A(1,:)' A(4,:)'];
%8c
K=[2 7 9 7; 3 1 5 6; 8 1 2 5];
C=[K(:,2) K(:,3) 
%8d
A(:)	%%Polega na zamianie tablicy dwuwymiarowej na wektor o tablicy jednowymiarowej.
%8e
B=reshape(A, [2,6])
%8f
flipud(b)
%8g
fliplr(B)
%8h
A=[2 7 9 7; 3 1 5 6; 8 1 2 5];
Z=zeros(1,4)
V=[A;Z]
%8i
V(2,:)
%8j
E=[7 6 5 0]
T=[V;E]
%8k
z=cumsum(T,2)
%8l
e=cumsum(T)
%8m
sum(sum(T))





%9a
z=2./2*3
%9b
v=6-2./5+7
%9c
b=10./2-5-3+2*4
%9d
e=3.^2/4
%9e
o=3.^2.^2
%9f
S=2+round(6./9+3*2)./2-3
%9g
m=2+floor(6./9+3*2)./2-3
%9h
D=2+ceil(6./9+3*2)./2-3