t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    i = 0; j = (n + 1) // 2; cnt = 0
    while i < (n + 1) // 2 and j < n:
        if a[j] >= a[i] * 2:
            cnt += 1
            i += 1
        j += 1
    print(n - cnt)  
