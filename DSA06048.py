t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    m = 1e18; j = 0
    for i in range(n):
        if a[i] < m :
            m = a[i]
            j = i
    print(j)