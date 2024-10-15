program Hd;
var
  a, i, x, z: Integer;
  b: array[1..100] of Integer;
begin
  x := 2;
  z := 2;
  readln(a);
  for i := 1 to a do
  begin
    if i mod 2 = 0 then
    begin
      b[i] := x;
      x := x + z;
      z := z + 1;
    end
    else
    begin
      b[i] := x;
      x := x + z;
    end;
  end;
  writeln(b[a]);
end.