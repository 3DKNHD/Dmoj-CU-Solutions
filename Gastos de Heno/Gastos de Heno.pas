Program Hd;
var 
	N,Q,aux,i:Int64;
	ar: array of Int64;
begin
	readln(N,Q);
	setLength(ar,N+1);
	ar[0]:=0;
	for i:=1 to N do
	begin
		readln(aux);
		ar[i]:=ar[i-1]+aux;
	end;
	while Q>0 do
	begin
		readln(i,aux);
		Writeln(ar[aux]-ar[i-1]);
		Q:=Q-1;
	end;
end.