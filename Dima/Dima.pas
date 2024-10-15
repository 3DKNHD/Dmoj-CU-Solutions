program Hd;
var
sum, a, x, cp, aux: Int64;
begin
    sum := 0;
    a := 0;
    Readln(cp);
    while cp > 0 do
    begin
        Read(x);
        aux := a - x;
        if aux < 0 then
            aux := -aux;
        sum := sum + aux;
        a := x;
        cp := cp - 1;
    end;
    WriteLn(sum);
end.