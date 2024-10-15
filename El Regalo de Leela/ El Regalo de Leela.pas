program Hd;

function bs(a:Int64 ):Int64 ;
begin
  if (a > 0) then
    bs := a
  else
    bs := a * -1;
end;

var
  n, i, mp, aux, posa, ans: Int64;
  ar: array of Int64;


begin
  read(n);
  mp := 0;
  SetLength(ar, n);
  read(ar[0]);
  for i := 1 to n - 1 do
  begin
    read(ar[i]);
    if (ar[i] > ar[mp]) then
      mp := i;
  end;
  aux := ar[mp] div 2;
  posa := -1;
  for i := 0 to n - 1 do
  begin
    if (i <> mp) then
    begin
      if (posa = -1) then
      begin
        ans := ar[i];
        posa := 1;
      end
      else
      begin
        if (ABS(ans - aux) > ABS(ar[i] - aux)) or
        ((ABS(ans - aux) = ABS(ar[i] - aux)) and (ans < ar[i])) then
          ans := ar[i];
      end;
    end;
  end;
  writeln(ar[mp], ' ', ans);
end.
