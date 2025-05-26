t = int(input())
while t > 0:
    t -= 1
    m, n = map(int, input().split())
    ans = 0

    a = [[0] * n for _ in range(m)]
    for i in range(m):
        a[i] = list(map(int, input().split()))
    dp = [[0] * n for _ in range(m)]
    for i in range(m):
        for j in range(n):
            if i == 0 or j == 0:
                dp[i][j] = a[i][j]
            elif a[i][j] == 1:
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]) + 1
            else:
                dp[i][j] = 0
            ans = max(ans, dp[i][j])
    print(ans)
