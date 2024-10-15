program Hd;
var
  x1,x2,y1,y2:Integer;
begin
  Readln(x1,y1);
  ReadLn(x2,y2);
  if  (x1*x2>0) and (y1*y2>0) then WriteLn('SI')
  else WriteLn('NO');
end.