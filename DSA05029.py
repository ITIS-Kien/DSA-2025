t = int(input())
for _ in range(t):
    s = str(input())
    n = len(s)
    if n == 0:
        print(0)
        continue
    dp = [0] * (n + 1)
    dp[0] = dp[1] = 1
    if s[0] == '0' :
        print(0)
        continue
    for i in range(2, n + 1):
        if s[i - 1] != '0':
            dp[i] += dp[i - 1]
        if 10 <= int(s[i - 2:i]) <= 26:
            dp[i] += dp[i - 2]

    print(dp[n])
