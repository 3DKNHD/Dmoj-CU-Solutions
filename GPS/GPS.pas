program Hd;

var
  c, old, aux, cc, mt: Int64;

begin
  cc:=1;
  mt:=1;
  Read(c);
  Read(old);
  c:=c-1;
  while c>0 do
  begin
    Read(aux);
    if aux>old then
    begin
      cc:=cc+1;
      if cc>mt then
      begin
        mt:=cc;
      end;
     end
    else
      cc:=1;
    old:=aux;
    c:=c-1;
  end;
  WriteLn(mt);
end.