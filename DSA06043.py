T = int(input())
for _ in range(T):
    n = int(input())
    a = list(map(int, input().split()))
    s = sum(a)
    p = [(0, s)] * (n + 1)
    p[0] = (0, s - a[0])
    for i in range(1, n):
        p[i] = (p[i - 1][0] + a[i - 1], p[i - 1][1] - a[i])
        if p[i][0] == p[i][1]:
            print(i + 1)
            break
    else:
        print(-1)