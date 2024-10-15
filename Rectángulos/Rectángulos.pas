program Hd;
uses
SysUtils;

var
  c,i,aux,a:Int64; 

begin
  ReadLn(c);
  aux:=1;
  i:=0;
  while aux*aux<=c do
    begin
      a:= c div aux;
      if a*aux = c then
        i:= i+1;
      aux:=aux+1;
    end;
  WriteLn(i);
end.