program Hd;

var
  n:Integer;
begin
  Read(n);
  if n>=0 then n:=(n*(n+1) DIV 2)
  else n:=((n * (n-1)) DIV -2)+1;
  write(n);
end.
