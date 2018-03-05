stycznax = linspace(56,120,1000);
stycznay = linspace(24.6129,73.4402,1000);
opoznieniex = linspace(49.9,56,1000);
opoznieniey = linspace(20,20,1000);
min = linspace(24.6129,24.6129,8555);
max = linspace (73.4402,73.4402,8555)';
plot(t,y,'LineWidth',1.25);
hold on;
plot(t,u,'LineWidth',1.25);
plot(t,max,'r');
plot(t,min,'g');
plot(stycznax,stycznay);
plot(opoznieniex,opoznieniey);
xlabel('t');
ylabel('h(t)');
legend('Przebieg temperatury','Odpowied� skokowa','Maksymalna warto�c temperatury');