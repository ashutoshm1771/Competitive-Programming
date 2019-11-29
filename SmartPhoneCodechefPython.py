n=int(input())
l=list()
for i in range(n):
    a=int(input())
    l.append(a)
l.sort()
maxim=0
for i in range(n):
    r=l[i]*(n-i)
    maxim=max(r,maxim)
print(maxim)
