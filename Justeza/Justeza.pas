program Hd;

function ans(A, B, C, K: int64): int64;
var
  diff: int64;
begin
  if K mod 2 = 1 then
    diff := B - A
  else
    diff := A - B;
  ans := diff;
end;

var
  A, B, C, K, result: int64;
begin
  readln(A, B, C, K);
  result := ans(A, B, C, K);
  writeln(result);
end.
