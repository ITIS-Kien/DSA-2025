n = int(input())
a = list(map(int, input().split()))
cnt = 1
for i in range(n - 1) :
    nSwap = True
    for j in range(n - i - 1) :
        if a[j] > a[j + 1] :
            tmp = a[j + 1]
            a[j + 1] = a[j]
            a[j] = tmp
            nSwap = False
    if nSwap : break
    print("Buoc " + str(cnt) + ":", end=" ")
    cnt += 1
    for it in a :
        print(it, end=" ")
    print()
    