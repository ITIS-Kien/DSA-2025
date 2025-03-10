def binary_search(a, l, r, x):
    while l <= r:
        m = (r + l) // 2
        if a[m] == x:
            return m
        elif a[m] < x:
            l = m + 1
        else:
            r = m - 1
    return -1

t = int(input())
for _ in range(t) :
    n, x = map(int, input().split())
    a = list(map(int, input().split()))
    tmp = 0
    for i in range(len(a) - 1) :
        if a[i] > a[i + 1] : tmp = i
    f1 = binary_search(a, 0, tmp, x)
    if f1 != -1 : print(f1 + 1)
    else : print(binary_search(a, tmp + 1, n, x) + 1)