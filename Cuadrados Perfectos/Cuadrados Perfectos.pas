program Hd;

var
  a, b, n, aux, i: int64;
begin
  a := 1;
  b := 0;
  read(n);
  while a <= 500 do
  begin
    aux := a * a;
    i := 1;
    while (i * i) < aux do
    begin
      if aux - (i * i) = n then
      begin
        b := b + 1;
        break;
      end;
      i := i + 1;
    end;
    a := a + 1;
  end;
  writeln(b);
end.