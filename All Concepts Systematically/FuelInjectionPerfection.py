# Author : Ashutosh Mishra



import math   
def longDivision(number, divisor):   
    ans = "";  
    idx = 0;  
    temp = ord(number[idx]) - ord('0'); 
    while (temp < divisor): 
        temp = (temp * 10 + ord(number[idx + 1]) -
                            ord('0')); 
        idx += 1; 
    idx +=1;  
    while ((len(number)) > idx):  
        ans += chr(int(math.floor(temp // divisor)) + ord('0'));  
        temp = ((temp % divisor) * 10 + ord(number[idx]) -
                                        ord('0')); 
        idx += 1; 
    ans += chr(int(math.floor(temp // divisor)) + ord('0')); 
    if (len(ans) == 0):  
        return "0";   
    return ans;

def isSmaller(str1, str2): 
    n1 = len(str1)  
    n2 = len(str2) 
    if (n1 < n2): 
        return True
    if (n2 < n1): 
        return False
    for i in range(n1): 
        if (str1[i] < str2[i]): 
            return True
        elif (str1[i] > str2[i]): 
            return False
    return False

def findDiff(str1, str2): 
    if (isSmaller(str1, str2)): 
        temp = str1 
        str1 = str2 
        str2 = temp  
    str3 = "" 
    n1 = len(str1)  
    n2 = len(str2) 
    str1= str1[::-1] 
    str2 = str2[::-1]   
    carry = 0
    for i in range(n2): 
        sub = ((ord(str1[i])-ord('0'))-(ord(str2[i])-ord('0'))-carry) 
        if (sub < 0): 
            sub = sub + 10
            carry = 1
        else: 
            carry = 0
        str3 = str3+str(sub ) 
    for i in range(n2,n1): 
        sub = ((ord(str1[i])-ord('0')) - carry)  
        if (sub < 0): 
            sub = sub + 10
            carry = 1
        else: 
            carry = 0
        str3 = str3+str(sub )  
    str3= str3[::-1] 
    return str3

def findSum(str1, str2):  
    if (len(str1) > len(str2)): 
        t = str1; 
        str1 = str2; 
        str2 = t; 
    str = "";  
    n1 = len(str1); 
    n2 = len(str2);    
    str1 = str1[::-1];  
    str2 = str2[::-1];  
    carry = 0;  
    for i in range(n1):   
        sum = ((ord(str1[i]) - 48) + 
              ((ord(str2[i]) - 48) + carry));  
        str += chr(sum % 10 + 48);    
        carry = int(sum / 10);    
    for i in range(n1, n2):  
        sum = ((ord(str2[i]) - 48) + carry);  
        str += chr(sum % 10 + 48);  
        carry = (int)(sum / 10);  
    if (carry):  
        str += chr(carry + 48);  
    str = str[::-1];  
    return str; 

def mod(num, a):  
    res = 0 
    for i in range(0, len(num)): 
        res = (res * 10 + int(num[i])) % a; 
    return res 

def solution(n):
    count = 0
    while int(findDiff(n,str(1)))>0:
        if mod(n,2) == 0:             
            n = longDivision(n,2)
            n=n.lstrip("0")
        elif n.lstrip("0") == '3' or mod(n,4) == 1: 
            n = findDiff(n,str(1))
            n=n.lstrip("0")
        else:                      
            n = findSum(n,str(1))
            n=n.lstrip("0")
        count += 1
    return count

if __name__ == "__main__" : 
    n = input()
    print(solution(n))
