program Hd;

function gcd(a, b: int64): int64;
begin
  if b = 0 then
    gcd := a
  else
    gcd := gcd(b, a mod b);
end;

var
  num, den, n, k, a, b, aux: int64;
begin
  num := 0;
  den := 0;
  read(k, n);
  for b := n downto k + 1 do
  begin
    for a := k to b - 1 do
    begin
      if gcd(a, b) = 1 then
      begin
        if den = 0 then
        begin
          num := a;
          den := b;
        end
        else
        begin
          aux := (den * b) div gcd(den, b);
          num := num * (aux div den) + (a * (aux div b));
          den := aux;
          aux := gcd(den, num);
          num := num div aux;
          den := den div aux;
        end;
      end;
    end;
  end;
  writeln(num, '/', den);
end.