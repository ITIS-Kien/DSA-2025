from math import sqrt

dp = [1e9] * 10001
dp[0] = 0
for i in range(1, 10001):
    for j in range(1, int(sqrt(i)) + 1):
        dp[i] = min(dp[i], dp[i - j * j] + 1)    

t = int(input())
for _ in range(t):
    n = int(input())
    print(dp[n])
