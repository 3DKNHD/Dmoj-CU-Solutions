program Hd;

var
  c,left,right:Int64;
begin
  Read(c);
  left:=c;
  c:=c-1;
  right:=(c-1)*c DIV 2;
  while left<right do
  begin
    left:=left+c;
    c:=c-1;
    right:=right-c;
  end;
  write(c);
end.