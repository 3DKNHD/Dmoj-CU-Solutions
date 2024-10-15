program Hd;
var
  cp,n,i:Int64;
  dp: array of Int64; 

begin
  ReadLn(cp);
  while cp > 0 do
  begin
    ReadLn(n);
    SetLength(dp,n+1);
    dp[0]:=1;
    dp[1]:=1;
    for i:=2 to n do
    begin
      dp[i]:=(dp[i-1]+dp[i-2]) mod 1000000007;
    end;
    WriteLn(dp[n]);
    cp:=cp-1;
  end;
end.