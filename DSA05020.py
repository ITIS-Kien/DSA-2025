def MinPathDP(n, m, a):
    dp = [[0] * m for _ in range(n)]
    dp[0][0] = a[0][0]
    for j in range(1, m):
        dp[0][j] = dp[0][j - 1] + a[0][j]
    for i in range(1, n):
        dp[i][0] = dp[i - 1][0] + a[i][0]
    for i in range(1, n):
        for j in range(1, m):
            dp[i][j] = a[i][j] + min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1])
    return dp[n - 1][m - 1]

t = int(input())
while t > 0:
    t -= 1
    n, m = map(int, input().split())
    a = []
    for _ in range(n):
        a.append(list(map(int, input().split())))
    print(MinPathDP(n, m, a))
