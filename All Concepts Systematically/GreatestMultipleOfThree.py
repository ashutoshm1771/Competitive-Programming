# Author : Ashutosh Mishra

MAX_SIZE = 10
def sortCount(arr, n): 
	count = [0]*MAX_SIZE 
	for i in range(n): 
		count[arr[i]] += 1
	index = 0
	for i in range(MAX_SIZE): 
		while count[i] > 0: 
			arr[index] = i 
			index += 1
			count[i] -= 1
def removeAndResult(arr, n, ind1, ind2=-1): 
	num=0
	for i in range(n-1, -1, -1): 
		if i != ind1 and i != ind2: 
			num = num*10 + arr[i]
	return num
def solution(l):
	n=len(l)
	s = sum(l) 
	if s % 3 == 0: 
		num=0
		l.sort(reverse=True)
		for i in l:
			num = num*10 + i
		return num
	sortCount(l, n) 
	remainder = s % 3 
	if remainder == 1: 
		rem_2 = [0]*2
		rem_2[0] = -1; rem_2[1] = -1
		for i in range(n):  
			if l[i] % 3 == 1: 
				return removeAndResult(l, n, i) 
			if l[i] % 3 == 2: 
				if rem_2[0] == -1: 
					rem_2[0] = i 
				elif rem_2[1] == -1: 
					rem_2[1] = i 
		if rem_2[0] != -1 and rem_2[1] != -1: 
			return removeAndResult(l, n, rem_2[0], rem_2[1]) 
	elif remainder == 2: 
		rem_1 = [0]*2
		rem_1[0] = -1; rem_1[1] = -1 
		for i in range(n): 
			if l[i] % 3 == 2: 
				return removeAndResult(l, n, i) 
			if l[i] % 3 == 1: 
				if rem_1[0] == -1: 
					rem_1[0] = i 
				elif rem_1[1] == -1: 
					rem_1[1] = i 
		if rem_1[0] != -1 and rem_1[1] != -1: 
			return removeAndResult(l, n, rem_1[0], rem_1[1]) 
	return 0
if __name__ == "__main__": 
	arr = [4, 4, 1, 1, 1, 3] 
	n = len(arr) 
	print(solution(arr, n))
