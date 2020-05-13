# Author : Ashutosh Mishra

n=int(input())
a=[int(x) for x in input().split()]
if len(a)<3:
    print("No Zseries")
else:
    a.sort()
    l=[]
    for i in range(len(a)):
        for j in range(i+1,len(a)):
            if a[i]+a[j]+1 in a:
                l.append([a[i],a[j],a[i]+a[j]+1])
    l1=l[::]
    for i in range(len(l)):
        while True:
            if l1[i][-1]+l1[i][-2]+1 in a:
                l[i].append(l[i][-1]+l[i][-2]+1)
            else:
                break
            l1=l[::]
    if len(l)!=0:
        m=0
        for i in l:
            if len(i)>m:
                m=len(i)
        p=[]
        for i in l:
            if len(i)==m:
                p.append(i)
        p.sort()
        for i in p[0]:
            print(i,end=" ")   
    else:
        print("No Zseries")   
