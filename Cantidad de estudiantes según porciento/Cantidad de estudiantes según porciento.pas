Program Hd;
var 
    n,i:Int64;
    a,b,c,d,e:Integer;
begin
    readln(n);
    while n>0 do
    begin
        readln(a,b,c,d,e);
        i:=1;
        while true do
        begin
            if ((i*a)mod 100 = 0) and ((i*b)mod 100 = 0) and ((i*c)mod 100 = 0) and ((i*d)mod 100 = 0) and ((i*e)mod 100 = 0) then 
                break;
            i:=i+1;
        end;
        writeln(i);
        n:=n-1;
    end;
end.