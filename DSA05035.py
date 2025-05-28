<<<<<<< HEAD
C = [[0] * 110 for _ in range(110)]
MOD = 1000000007
for i in range(110):
    for j in range(i + 1):
        if j == 0 or i == j: C[i][j] = 1
        else :
            C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % MOD

t = int(input())
for _ in range(t):
    n = int(input())
    print(C[n + 9][n])
=======
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
>>>>>>> ad4484823126a368973abacfb49a4345f0e671d7
