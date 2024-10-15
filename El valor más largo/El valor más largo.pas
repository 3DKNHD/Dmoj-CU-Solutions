program Hd;
uses
SysUtils;

function ma(a, b: Int64): Int64;
begin
    if a > b then
        ma := a
    else
        ma := b;
end;

var
c, a, b, a1, a2, a3, a4, r1, r2, r3: Int64;
begin
    ReadLn(c);
    a := c mod 10;
    b := (c div 10) mod 10;
    c := c div 100;

    a1 := a + b + c;
    a2 := a + b * c;
    a3 := a * b + c;
    a4 := a * b * c;

    r1 := ma(a1, a2);
    r2 := ma(a3, a4);
    r3 := ma(r1, r2);

    WriteLn(r3);
end.