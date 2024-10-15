program Hd;

var
    n, m, x, y, a, b, i, aux, pos, mn, j: Int64;
    ar: array of integer;

begin
    readln(n, m);
    readln(x, y);
    readln(a, b);
    
    SetLength(ar, n);
    
    for i := 1 to n do
    begin
        aux := 1;
        pos := i;
        
        if (x <= pos) and (pos <= y) then
            pos := (x + y) - pos;
        
        if (a <= pos) and (pos <= b) then
            pos := (a + b) - pos;
        
        while pos <> i do
        begin
            aux := aux + 1;
            
            if (x <= pos) and (pos <= y) then
                pos := (x + y) - pos;
            
            if (a <= pos) and (pos <= b) then
                pos := (a + b) - pos;
        end;
        
        mn := m mod aux;
        
        for j := 1 to mn do
        begin
            if (x <= pos) and (pos <= y) then
                pos := (x + y) - pos;
            
            if (a <= pos) and (pos <= b) then
                pos := (a + b) - pos;
        end;
        
        ar[pos - 1] := i;
    end;
    
    for i := 0 to n - 1 do
        writeln(ar[i]);
end.