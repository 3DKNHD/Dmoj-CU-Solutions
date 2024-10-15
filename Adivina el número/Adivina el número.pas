program Hd;

var
  a, b, c, i: Int64;

begin
  readln(a, b, c);
  for i := 1 to 1000 do
  begin
    if i * c >= 1000 then
    begin
      a := a + i * c;
      break;
    end;
  end;
  for i := 1 to 1000 do
  begin
    if i * b >= 1000 then
    begin
      a := a + (i - 1) * b;
      break;
    end;
  end;
  writeln(a);
end.