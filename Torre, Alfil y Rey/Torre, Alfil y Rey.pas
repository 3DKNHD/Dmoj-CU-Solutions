program Hd;

function Max(a,b:Integer):Integer; 
begin
  if a > b then Max:=a
  else Max:=b
end;

function Rey(r1, c1, r2, c2: Integer): Integer;
begin
  Rey := Max(Abs(r1 - r2), Abs(c1 - c2));
end;

function Torre(r1, c1, r2, c2: Integer): Integer;
begin
  if (r1 = r2) or (c1 = c2) then
    Torre := 1
  else
    Torre := 2;
end;

function puede(r1, c1, r2, c2: Integer): Boolean;
begin
  puede := (r1 + c1) mod 2 = Abs(r2 - c2) mod 2;
end;

function Alfil(r1, c1, r2, c2: Integer): Integer;
begin
  if not puede(r1, c1, r2, c2) then
    Alfil := 0
  else if Abs(r1 - r2) = Abs(c1 - c2) then
    Alfil := 1
  else
    Alfil := 2;
end;

var
  r1, c1, r2, c2: Integer;
begin
  ReadLn(r1, c1, r2, c2);
  WriteLn(Torre(r1, c1, r2, c2), ' ', Alfil(r1, c1, r2, c2), ' ', Rey(r1, c1, r2, c2));
end.