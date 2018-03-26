AX = -2;
BY = -3;
AY = 0;
BX = 0;
va = 2;
vb = 3;

ax = AX;
ay = AY;
bx = BX;
by = BY;

przedzial = (5-0)/1000;
najkrotszy = sqrt( (BX - AX)^2 + (BY - AY)^2 );
suwak = 0;
najkrotszywektor = [ AX AY BX BY ];

for i = 0:przedzial:5
    AX = ax + i * va;
    BY = by + i * vb;
    AX2 = ax + (i+przedzial) * va;
    BY2 = by + (i+przedzial) * vb;
    
    dlugosc1 = sqrt( (BX - AX)^2 + (BY - AY)^2 );
    dlugosc2 = sqrt( (BX - AX2)^2 + (BY2 - AY)^2 );
    
    if dlugosc1 > dlugosc2
        najkrotszy = dlugosc2;
        suwak = i;
        najkrotszywektor = [ AX AY BX BY ];
    end
end