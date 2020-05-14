# Author : Ashutosh Mishra

def solution(n):
    dp = [0]*(n+1)
    dp[0]=1
    for i in range(1, n+1):
        for j in range(n, i-1, -1):
            dp[j] += dp[j-i]
    return dp[n] - 1
print(solution(int(input())))
