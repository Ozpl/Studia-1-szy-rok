A=[1 7 -3 2; -2 0 0 -5; 7 10 0 -16; 8 1 -7 3];
%X=[x1;x2;x3;x4];
B=[8; 15; 0; 1];

%A*X=B;

W=det(A);   %wyznacznik glowny

A1=A;   %pierwszy wyzancznik "poboczny"
A1(:,1)=B;
W1=det(A1);

A2=A;
A2(:,2)=B;
W2=det(A2);

A3=A;
A3(:,3)=B;
W3=det(A3);

A4=A;
A4(:,4)=B;
W4=det(A4);

x1=W1 / W;
x2=W2 / W;
x3=W3 / W;
x4=W4 / W;