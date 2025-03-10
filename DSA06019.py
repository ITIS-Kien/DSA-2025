from functools import cmp_to_key

def cmp(a, b):
    if f[a] > f[b]:
        return -1
    elif f[a] < f[b]:
        return 1
    else:
        if a < b : return -1
        else : return 1

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().strip().split()))
    f = [0] * 100005  
    for it in a:
        f[it] += 1
    a.sort(key=cmp_to_key(cmp))
    print(*a)
