# Author : Ashutosh Mishra

n=input()
c=0
res=''
for i in range(len(n)):
    if(n[i]=='0' and c==0):
        c+=1
    elif(n[i]=='0' and c>0):
        res+="0"
    elif(n[i]=='1'):
        res+="1"
    else:
        pass
l=len(res)
if c==0:
    res=res[:l-1]
print(res)
