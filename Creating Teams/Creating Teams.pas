program Hd;
function min(a,b:Integer):Integer ;
begin
  if a > b  then min:=b
  else min:=a;
end;

var
  n,m,k,ans:Integer ;
begin
  ReadLn(m,n,k);
  ans := min(m div 2,n);
  m := (m+n-k) div 3;
  ans := min(m,ans);
  Write(ans);
end.