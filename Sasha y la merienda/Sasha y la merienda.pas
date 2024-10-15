program Hd;
var 
  total,pc,aux,tcp,solution,i,j:Int64;
  ar:array of Int64;
begin
  readln(total,pc);
  SetLength(ar,total);
  for i:=0 to total-1 do
  begin
    read(ar[i]);
  end;
  solution:=0;
  for i:=0 to total-1 do
  begin
    aux:=0;tcp:=0;
    for j:=i to total-1 do
    begin
      if tcp > pc then break
      else if tcp+ar[j] <= pc then
        begin
          tcp:=tcp+ar[j];
          aux:=aux+1;
          if aux>solution then 
            solution:=aux;
       end;
    end;
  end;
  WriteLn(solution);
end.