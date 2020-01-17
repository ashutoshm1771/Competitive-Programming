#Author : Ashutosh Mishra
#Usage of count function
#Inefficient solution
#Greater than O(n)
#Python Code
n=int(input())
a=list(map(int,input().split()))
for i in range(n):
    if a.count(a[i])==1:
        print(a[i])
