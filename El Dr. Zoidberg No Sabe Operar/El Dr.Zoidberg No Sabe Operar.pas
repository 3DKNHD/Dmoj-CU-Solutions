program Hd;
function Solve():Integer;
var
  n,a,aux,i:Int64;
begin
  ReadLn(n);
  aux:=0;
  for i:=1 to n do
  begin
    read(a);
    a:=a+aux;
    if (a<i) or ((i = n) and (a>i)) then
    begin
      Writeln('No');
      Exit(0);
    end;
    aux:=a-i;
  end;
  Write('Si');
end;

begin
  Solve();
end.