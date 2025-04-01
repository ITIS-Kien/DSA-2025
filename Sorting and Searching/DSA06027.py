T = int(input())
for _ in range(T):
    n = int(input())
    a = list(map(int, input().split()))
    f = []
    for i in range(n - 1) :
        x = "Buoc " + str(i + 1) + ": "
        for j in range(i + 1, n) :
            if a[j] < a[i] :
                tmp = a[j]
                a[j] = a[i]
                a[i] = tmp
        for it in a :
            x += str(it) + " "
        f.append(x)
    while len(f) > 0 :
        x = f[-1]
        f.pop()
        print(x)
        