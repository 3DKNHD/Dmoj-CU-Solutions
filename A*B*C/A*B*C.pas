program Hd;

var
  r, cp, i, j, k: int64;
begin
  r := 0;
  read(cp);
  for i := 1 to cp do
  begin
    for j := 1 to cp do
    begin
      if (i * j > cp) then
        break;
      for k := 1 to cp div (i * j) do
      begin
        r := r + 1;
      end;
    end;
  end;
  writeln(r);
end.
