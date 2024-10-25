program Hd;

function bpow(base, exp: Int64): Int64;
var
    result: Int64;
begin
    result := 1;
    while exp > 0 do
    begin
        if exp mod 2 = 1 then
        begin
            result := result * base;
        end;
        base := base * base;
        exp := exp div 2;
    end;
    bpow := result;
end;

var
    aux, k, n, m: Int64;
begin
    readln(n, k);
    m := bpow(2, n - 1);
    while m <> k do
    begin
        if k > m then
        begin
            aux := k - m;
            k := m - aux;
        end;
        n := n - 1;
        m := bpow(2, n - 1);
    end;
    writeln(n);
end.