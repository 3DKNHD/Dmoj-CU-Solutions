program Hd;
uses
SysUtils;

var
oldPos: array of Int64;
N, K, maxId, i, x: Int64;

begin
    maxId := -1;
    readln(N, K);
    SetLength(oldPos, 1000001);
    for i := 1 to N do
    begin
        readln(x);
        if oldPos[x] <> 0 then
        begin
            if (i - oldPos[x]) <= K then
            begin
            if x > maxId then
                maxId := x;
            end;
        end;
        oldPos[x] := i;
    end;
    writeln(maxId);
end.