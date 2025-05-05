t = int(input())
for _ in range(t) :
    n1, n2, n3 = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    c = list(map(int, input().split()))
    i = j = k = ans = 0
    while i < n1 and j < n2 and k < n3 :
        if a[i] == b[j] == c[k] :
            print(a[i], end=" ")
            ans = 1
            i += 1; j += 1; k += 1
        elif a[i] > b[j] : j += 1
        elif a[i] > c[k] : k += 1
        else : i += 1
    if ans == 0 : print(-1)
    else : print()