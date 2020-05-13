# Author : Ashutosh Mishra

def multiply(num1, num2): 
	len1 = len(num1) 
	len2 = len(num2) 
	if len1 == 0 or len2 == 0: 
		return "0" 
	result = [0] * (len1 + len2) 
	i_n1 = 0
	i_n2 = 0 
	for i in range(len1 - 1, -1, -1): 
		carry = 0
		n1 = ord(num1[i]) - 48
		i_n2 = 0
		for j in range(len2 - 1, -1, -1): 
			n2 = ord(num2[j]) - 48
			summ = n1 * n2 + result[i_n1 + i_n2] + carry  
			carry = summ // 10
			result[i_n1 + i_n2] = summ % 10
			i_n2 += 1
		if (carry > 0): 
			result[i_n1 + i_n2] += carry 
		i_n1 += 1 
	i = len(result) - 1
	while (i >= 0 and result[i] == 0): 
		i -= 1 
	if (i == -1): 
		return "0"
	s = "" 
	while (i >= 0): 
		s += chr(result[i] + 48) 
		i -= 1
	return s 
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

def sumUpto(x):
    if(x&1):
        a=int((x+1)/2)
        b=x
    else:
        a=int(x/2)
        b=x+1
    return multiply(str(a),str(b))

def solution(x,y):
    s=findSum(str(1),sumUpto(x+y-1))
    s=findDiff(s,str(y))
    return s.lstrip("0")

x,y=map(int,input().split())
print(solution(x,y))
