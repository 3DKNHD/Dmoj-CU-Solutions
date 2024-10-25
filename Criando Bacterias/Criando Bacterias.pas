program Hd;
var 
  num,cont:Int64;
begin
  read(num);
  cont:=0;
  while num>=2 do
  begin
    if  num mod 2 = 1 then
      cont:=cont+1;
    num:=num div 2;
  end;
  cont:=cont+num;
  WriteLn(cont)
end.