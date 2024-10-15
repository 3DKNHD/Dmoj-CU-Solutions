#define Hd
def fromZeroToN(val : int) -> int:
    count = 0
    start = 0
    end = val % 10
    set_val = val
    if val<10: return val
    while val:
        start = val %10
        val //=10
    if start<=end:
        count = 9+set_val//10
    else:
        count = 8+set_val//10

    return count

start,end = map(int,input().split())
print(fromZeroToN(end)-fromZeroToN(start-1))