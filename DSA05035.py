t = int(input())
for _ in range (t):
    n = int(input())
    a = list(map(int, input().split()))
    inc = [1] * n
    dec = [1] * n
    for i in range(1, n):
        if a[i] > a[i - 1]: inc[i] = inc[i - 1] + 1
    for i in range(n - 2, -1, -1):
        if a[i] > a[i + 1]: dec[i] = dec[i + 1] + 1
    ans = -1
    for i in range(n):
        ans = max(ans, inc[i] + dec[i] - 1)
    print(ans)