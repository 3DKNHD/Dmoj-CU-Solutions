program Hd;

function pp(a: UInt64): UInt64;
begin
    pp := a * a * a;
end;

function pt(a: UInt64): UInt64;
begin
    pt := a * a;
end;

function min(a, b: Int64): Int64;
begin
    if a > b then
        min := b
    else
        min := a;
end;

var
    a, suma, i: UInt64;
begin
    suma := 0;
    readln(a);
    i := 1;
    while pp(i) <= a do
    begin
        suma := suma + i * (min(a + 1, pp(i + 1)) - pp(i));
        i := i + 1;
    end;
    i := 0;
    while pt(i) <= a do
    begin
        suma := suma + (i + 1) * (min(a, pt(i + 1)) - pt(i));
        i := i + 1;
    end;
    writeln(suma);
end.