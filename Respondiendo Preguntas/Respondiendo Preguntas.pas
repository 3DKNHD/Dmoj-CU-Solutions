program Main;
uses SysUtils, Math;

var 
N, cp, aux, u, v: Int64;
Three: array of Int64;
done: boolean;

procedure Init(node: Int64; l: Int64; r: Int64);
var
mi: Int64;
begin
    if l = r then
        Three[node] := 0
    else
    begin
        mi := (l + r) div 2;
        Init(2 * node, l, mi);
        Init(2 * node + 1, mi + 1, r);
        Three[node] := (Three[2 * node] + Three[2 * node + 1]);
    end;
end;

procedure Update(x: Int64; val: Int64; node: Int64; l: Int64; r: Int64);
var
mi: Int64;
begin
    if (r < x) or (l > x) then
        Exit;
    if l = r then
        Three[node] += val
    else
    begin
        mi := (l + r) div 2;
        Update(x, val, 2 * node, l, mi);
        Update(x, val, 2 * node + 1, mi + 1, r);
        Three[node] := (Three[2 * node] + Three[2 * node + 1]);
    end;
end;

function Query(x: Int64; y: Int64; node: Int64; l: Int64; r: Int64): Int64;
var
mi: Int64;
begin
    if (r < x) or (l > y) then
        Exit(0);
    if (x <= l) and (r <= y) then
        Exit(Three[node])
    else
    begin
        mi := (l + r) div 2;
        Exit(Query(x, y, 2 * node, l, mi) + Query(x, y, 2 * node + 1, mi + 1, r));
    end;
end;

begin
    Readln(N, cp, aux);
    N += 1;
    cp+=aux;
    SetLength(Three, 4 * N);
    while cp > 0 do
    begin
        Readln(aux, u, v);
        if aux = 1 then
        begin
            done := true;
            Update(u - 1, v, 1, 0, N);
            Update(u, 2 * v, 1, 0, N);
            Update(u + 1, v, 1, 0, N);
        end
        else
        begin
            if not done then
            Writeln(0)
            else
            Writeln((Query(u, v, 1, 0, N)) mod 10000);
        end;
        cp -= 1;
    end;
end.