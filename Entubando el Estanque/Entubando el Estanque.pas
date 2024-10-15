program Hd;

function mx(a,b:Int64):Int64 ;
begin
  if a>b then mx:=a
  else mx:=b;
end;
var
  ar:array[0..50] of array [0..50] of Int64;
  r,c,i,j,ans:Int64;
begin
  ReadLn(r,c);
  for i:=1 to r do
  begin
    for j:=1 to c-1 do
    begin
      read(ar[i][j]);
    end;
    readln(ar[i][c]);
  end;
  ans:=0;
  for i:=1 to r do
  begin
    for j:=1 to c do
    begin
      if ((ar[i - 1][j] = ar[i][j] )or (ar[i + 1][j] = ar[i][j] )or( ar[i][j + 1] = ar[i][j] )or(ar[i + 1][j + 1] = ar[i][j] )or(ar[i - 1][j + 1] = ar[i][j]) or (ar[i + 1][j - 1] = ar[i][j]) or( ar[i][j - 1] = ar[i][j] )or(ar[i - 1][j - 1] = ar[i][j])) then
        ans := mx(ans, ar[i][j]);
    end;
  end;
  write(ans);
end.