T = int(input())
for _ in range(T) : 
    n = int(input())
    a = list(map(int, input().split()))
    ans = []
    for i in range(n - 1) :
        nSwap = True
        for j in range(n - i - 1) :
            if a[j] > a[j + 1] :
                tmp = a[j + 1]
                a[j + 1] = a[j]
                a[j] = tmp
                nSwap = False
        if nSwap : break
        x = "Buoc " + str(i + 1) + ": "
        for it in a :
            x += str(it) + " "
        ans.append(x)
    while len(ans) > 0:
        x = ans[-1]; ans.pop()
        print(x)