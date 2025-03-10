t = int(input())
for _ in range(t) :
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    a = sorted(a, reverse=True)
    for i in range(k) :
        print(a[i], end=" ")
    print()