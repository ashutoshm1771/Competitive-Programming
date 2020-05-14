def solution(x,y):
	mach, facula = int(x), int(y)
	cnt = 0
	while min(mach, facula) != 1:
		if max(mach, facula) % min(mach, facula) == 0:
			return "impossible"
			
		cnt += int(max(mach, facula)/min(mach, facula))
		prevFacula=min(mach, facula)
		mach=max(mach, facula)%min(mach, facula)
		facula=prevFacula
		# Equivalent to above 3 statements
                #(mach, facula) = (max(mach, facula)%min(mach, facula), min(mach, facula))
	return str(cnt + max(mach, facula) - 1)

print(solution(4,7))
