program Hd;
var
  a, b, c, d: Int64;
begin
  readln(a, b, c, d);
  if (a = c) and (b = d) or (a = b) and (c = d) or (a = d) and (b = c) then
  begin
    writeln('YES');
    writeln(a * b);
  end
  else
  begin
    writeln('NO');
    writeln(a + b + c + d);
  end;
end.
