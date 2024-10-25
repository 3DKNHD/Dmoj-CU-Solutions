program Hd;
var
  t,n:Integer;
begin 
  ReadLn(t);
  while t>0 do
  begin
    ReadLn(n);
    n:=n and -n;
    WriteLn(n);
    t:=t-1;
  end;
end.