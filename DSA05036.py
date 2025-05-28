t = int(input())
for _ in range(t):
    n = int(input())
    a = list(); b = list()
    dp = [1] * (n + 1)
    ans = 0
    for i in range(n):
        x, y = map(float, input().split())
        a.append(x)
        b.append(y)
    for i in range(n):
        for j in range(i):
            if a[j] < a[i] and b[j] > b[i] : dp[i] = max(dp[i], dp[j] + 1)
        ans = max(ans, dp[i])
    print(ans)