program Hd;
uses math;

type
    point = record
        x, y: Int64;
    end;

var
    n, x, y, i, j: Int64;
    coord: array of point;
    m, x1, y1: real;

begin
    readln(n);
    SetLength(coord, n);
    
    for i:=0 to n-1 do
        readln(coord[i].x, coord[i].y);
    
    m := 100000000.0;
    
    for i:=0 to n-2 do
    begin
        for j:=i+1 to n-1 do
        begin
            x1 := coord[i].x - coord[j].x;
            x1 := x1 * x1;
            y1 := coord[i].y - coord[j].y;
            y1 := y1 * y1;
            y1 := sqrt(x1 + y1);
            
            if m > y1 then
            begin
                m := y1;
                x := i + 1;
                y := j + 1;
            end;
        end;
    end;
    writeln(x, ' ', y);
end.