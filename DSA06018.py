t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().strip().split()))
    f = [0] * 100005
    mi = min(a)
    ma = max(a)
    cnt = 0
    for it in a :   f[it] += 1
    for i in range(mi, ma + 1) : 
        if f[i] == 0 : cnt += 1
    print(cnt)