program Hd;
var
    n: int64;
    c: array[0..99] of INTEGER = (1,1,1,2,1,2,1,3,2,2,1,4,1,2,2,4,1,4,1,4,2,2,1,6,2,2,3,4,1,5,1,5,2,2,2,8,1,2,2,6,1,5,1,4,4,2,1,9,2,4,2,4,1,6,2,6,2,2,1,10,1,2,4,7,2,5,1,4,2,5,1,12,1,2,4,4,2,5,1,9,4,2,1,10,2,2,2,6,1,10,2,4,2,2,2,12,1,4,4,8);
begin
    readln(n);
    writeln(c[integer(n)-1]);
end.