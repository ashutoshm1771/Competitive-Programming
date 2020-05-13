# Author : Ashutosh Mishra

def solution(x):
    x=list(x)
    for i in range(len(x)):
        if(x[i].islower()):
            x[i]=chr(122-(ord(x[i])-97))
    return "".join(x)
x=input()
print(solution(x))
