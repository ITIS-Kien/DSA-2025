T = int(input())
for _ in range(T) :
    n = int(input())
    a = list(map(int, input().split()))
    m = {}
    ans = a[0]
    maxf = 0
    for it in a :
        if it in m : m[it] += 1
        else : m[it] = 1
        if m[it] > maxf :
            ans = it
            maxf = m[it]
    if maxf > n // 2 : print(ans)
    else : print("NO")