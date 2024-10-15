program Hd;
uses math;
var 
  n,l,i:Int64;
begin
  ReadLn(n,l);
  i:=1;
  while n>0 do
  begin
    if i>=1000000 then
    begin
    if i div 1000000 mod 10 = l then
      i:=i+1000000;
    end;
    if i>=100000 then
    begin
    if i div 100000 mod 10 = l then
    i:=i+100000;
    end;
    if i>=10000 then
    begin
    if i div 10000 mod 10 = l then
    i:=i+10000;
    end;
    if i>=1000 then
    begin
    if i div 1000 mod 10 = l then
    i:=i+1000;
    end;
    if i>=100 then
    begin
    if i div 100 mod 10 = l then
    i:=i+100;
    end;
    if i>=10 then
    begin
    if i div 10 mod 10 = l then
    i:=i+10;
    end;
    if i mod 10 = l then
    i:=i+1;
    
    n:=n-1;
    if n = 0 then
    write(i);
    
    i:=i+1;
  end;
end.
