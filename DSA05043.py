t = int(input())
for _ in range(t):
    s = input()
    n = len(s)
    dp = [[False] * (n + 2) for _ in range(n + 2)]
    ans = 0
    for i in range(1, n + 1): dp[i][i] = True
    for length in range(2, n + 1):
        for i in range(1, n - length + 2):
            j = i + length - 1
            if length == 2: dp[i][j] = (s[i - 1] == s[j - 1])
            else : dp[i][j] = (s[i - 1] == s[j - 1] and dp[i + 1][j - 1])
            if dp[i][j] : ans = max(ans, length)
    print(ans)