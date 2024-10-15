program Hd;
var
  d1,d2,d3,x,y,z,num:Int64; 
  i:Boolean;
begin 
  readln(d1,d2,d3); 
  num:=3;
  i:=true;
  repeat
    x:=num mod 10;
    y:=num div 10;
    z:=y mod 10;
    if (num=d1) or (num=d2) or (num=d3) then i:=false
    else
    begin 
      if (x=d1) or (x=d2) or (x=d3) then
      begin
        if (z=d1) or (z=d2) or (z=d3) then
          i:=false
        else 
          num:=num+3;
       end
      else
      begin
        num:=num+3;
      end;  
    end;
  until not i;
  write(num)
end.
