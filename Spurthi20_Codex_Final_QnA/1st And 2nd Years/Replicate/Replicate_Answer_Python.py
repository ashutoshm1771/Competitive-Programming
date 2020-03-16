# Author : Ashutosh Mishra

for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    d=dict()
    for i in l:
        d[i]=0
    for i in l:
        d[i]+=1
    m=0
    for i in d.keys():
        if(m<d[i]):
            m=d[i]
    print(n-m)
