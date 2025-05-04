n = int(input())
a = list(map(int, input().split()))
f = []
for i in range(n - 1) :
    x = "Buoc " + str(i + 1) + ": "
    m = a[i]; u = i
    for j in range(i + 1, n) :
        if a[j] < m :
            m = a[j]
            u = j
    tmp = a[i]
    a[i] = a[u]
    a[u] = tmp
    for it in a :
        x += str(it) + " "
    f.append(x)
while len(f) > 0 :
    x = f[-1]
    f.pop()
    print(x)
        