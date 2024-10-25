program Hd;
var
    n, aux, x, dig, con: Int64;
begin
    readln(n);
    while n>0 do
    begin
        readln(x);
        aux:=x;
        con:=0;
        while aux>0 do
        begin
            dig:= aux mod 10;
            aux:= aux div 10;
            if (dig>0) and (x mod dig = 0) then con:=con+1;
        end;
        writeln(con);
        n:=n-1;
    end;
end.