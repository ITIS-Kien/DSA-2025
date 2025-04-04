t = int(input())
for _ in range(t) :
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    f = [0] * 100007
    for i in a :
        f[i] += 1
    if f[k] > 0 : print(f[k])
    else : print(-1)