#define Hd
from collections import Counter

def palindrome(s):
    char_count = Counter(s)
    left = []
    mid = ''

    for char, count in sorted(char_count.items()):
        if count % 2 == 1 and mid == '':
            mid = char
            count -= 1
        half_count = count // 2
        left.append(char * half_count)

    left = ''.join(left)
    right = left[::-1]

    return left + mid + right
    
cp=int(input())
while cp>0:  
    size=input()  
    input_str = input()
    result = palindrome(input_str)
    print(result)
    cp=cp-1