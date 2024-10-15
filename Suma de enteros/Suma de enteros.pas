program Hd;

var
    num,n,aux,p:Int64;

begin
    Readln(num);
    n:=Trunc(sqrt(num div 2));
    while n<num do
    begin
        aux:= (n*(n+1)) div 2;
        if aux = num then
        begin
            Writeln(0);
            break
        end    
        else if num-aux<=n then
        begin
            Writeln(n,' ',num-aux);
            break
        end;
        n:=n+1;
    end;
end.