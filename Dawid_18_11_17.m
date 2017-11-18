A = [5 -2 3 0 6; -3 9 1 -2 7.4; 2 -1 -7 1 6.7; 4 3 -5 7 9; 2 3.5 6.1 -4 -8.1];
b = [-1 2 3 0.5 3.1]';
x = rand(5,1);
n = size(x,1);

x=rand(5,1)
n=size(x,1);
wartosc = inf;
przyblizenie = 1e-3;
liczba_iter_Prosta = 0;

wykresProsta = [];
while wartosc>przyblizenie
    pamiec = x;
    
    for i = 1:n
        
        suma = 0;
        
        for j = 1:i-1
                suma = suma + A(i,j) * x(j);
        end
        
        for j = i + 1:n
                suma = suma + A(i,j) * pamiec(j);
        end
        
        x(i) = (1 / A(i,i)) * (b(i) - suma);
    end
    
    liczba_iter_Prosta = liczba_iter_Prosta+1;
    wartosc = norm(pamiec-x);
    wykresProsta = [wykresProsta;wartosc];
end

fprintf('Wynikiem jest (iteracja prostych) : \n%f\n%f\n%f\n%f\n%f w %d iteracjach',x,liczba_iter_Prosta);

x=rand(5,1);
n=size(x,1);
wartosc = inf;
przyblizenie = 1e-3;
liczba_iter_Gauss = 0;

wykresGauss=[];
while wartosc>przyblizenie
    pamiec = x;
    
    for i = 1:n
        
        suma = 0;
        
        for j = 1:i-1
                suma = suma + A(i,j) * x(j);
        end
        
        for j = i + 1:n
                suma = suma + A(i,j) * pamiec(j);
        end
        
        x(i) = (1 / A(i,i)) * (b(i) - suma);
    end
    
    liczba_iter_Gauss = liczba_iter_Gauss+1;
    wartosc = norm(pamiec-x);
    wykresGauss = [wykresGauss;wartosc];
end

fprintf('\nWynikiem jest (Gauss) : \n%f\n%f\n%f\n%f\n%f w %d iteracjach',x,liczba_iter_Gauss);

figure
hold on
plot(1:5:liczba_iter_Prosta,wykresProsta(1:5:liczba_iter_Prosta),'LineWidth',2.5)
plot(1:5:liczba_iter_Gauss,wykresGauss(1:5:liczba_iter_Gauss),'LineWidth',2.5)
legend('Metoda iteracji prostych', 'Metoda Gaussa-Seidla')
ylabel('Wartoœæ b³êdu')
xlabel('Liczba iteracji')
title('Metoda iteracji prostych i Gaussa-Seidla')
hold off