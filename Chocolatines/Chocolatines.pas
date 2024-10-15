program Hd;
var H,M,con,aux:Integer;

function C(a,b:Integer): Integer;
begin
    aux:=0;
    while a>0 do
    begin
        if a mod 10 = 4 then aux:=aux+1;
        a:=a div 10;
    end;
    while b>0 do
    begin
        if b mod 10 = 4 then aux:=aux+1;
        b:=b div 10;
    end;
    C:=aux;
end;

begin
    con:=0;
    Readln(H,M);
    if (H>=8) and (H<=20) then con:=con+C(H,M);
    M:=M+1;
    if M = 60 then 
    begin 
        M:=0;
        H:=H+1;
        if H = 24 then H:=0
    end;
    if (H>=8) and (H<=20) then con:=con+C(H,M);
    M:=M+1;
    if M = 60 then 
    begin 
        M:=0;
        H:=H+1;
        if H = 24 then H:=0
    end;
    if (H>=8) and (H<=20) then con:=con+C(H,M);
    Write(H,' ',M,' ',con);
end.