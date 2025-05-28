t = int(input())
for _ in range(t):
    n = int(input())
    ins, dle, cop = map(int, input().split())
    dp = [0] * (n + 1)
    dp[1] = ins
    for i in range(2, n + 1):
        dp[i] = dp[i - 1] + ins
        if i % 2 == 0:
            dp[i] = min(dp[i], dp[int(i / 2)] + cop)
        else :
            dp[i] = min(dp[i], dp[int((i + 1) / 2)] + cop + dle)
    print(dp[n])
