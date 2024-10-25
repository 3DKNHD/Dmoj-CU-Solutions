program Hd;
var
  a : array of Int64 ;
  dp : array of Int64 ;
  i, j ,amount: Int64;

begin
  ReadLn(i);
  setlength(a,i+1);

    for j:=1 to i do
      read(a[j]);
    
    j:=i+1;
    
    read(amount);
    SetLength(dp,amount+1);
    for j:=i downto 1 do
    begin
      if  a[j] <= amount then
      begin
        if a[j] = amount then
        begin
          if dp[0] > 0 then
          begin
            dp[amount]:=dp[amount]+1;
            dp[0]:=dp[0]-1;
          end;
        end;
        if a[j] < amount then
        begin
          dp[a[j]]:=dp[a[j]]+1;
          if amount-a[j]<>a[j] then 
          begin
            if dp[amount-a[j]]>0 then
            begin
              dp[amount]:=dp[amount]+1;
              dp[amount-a[j]]:=dp[amount-a[j]]-1;
            end;
          end;
        end;
      end;
      end;
  WriteLn(dp[amount]);
end.