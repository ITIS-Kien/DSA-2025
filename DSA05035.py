
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

