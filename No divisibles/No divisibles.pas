program Hd;
var
  a:Int64;
begin
  readln(a);
  write(a-((a div 2)+(a div 3)+(a div 5)-(a div 6)-(a div 10)-(a div 15)+(a div 30)));
end.