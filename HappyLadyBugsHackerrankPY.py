def happy(n, b):
    for a in set(b):
        if a != "_" and b.count(a) == 1:
            return "NO"
    
    if b.count("_") == 0:
        for i in range(1,n-1):
            if b[i-1]!=b[i] and b[i+1]!=b[i]:
                return "NO"
    return "YES"

for _ in range(int(input())):
    n = int(input())
    b = input()
    print(happy(n, b))
def happy(n, b):
    for a in set(b):
        if a != "_" and b.count(a) == 1:
            return "NO"
    
    if b.count("_") == 0:
        for i in range(1,n-1):
            if b[i-1]!=b[i] and b[i+1]!=b[i]:
                return "NO"
    return "YES"

for _ in range(int(input())):
    n = int(input())
    b = input()
    print(happy(n, b))
