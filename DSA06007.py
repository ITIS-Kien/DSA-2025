t = int(input())
for _ in range(t) :
    n = int(input())
    a = list(map(int, input().strip().split()))
    b = sorted(a)
    j = 0
    check = True
    for i in range(n) :
        if a[i] != b[i] : 
            j = i
            if check : 
                print(j + 1, end=" ")
                check = False
    print(j + 1)
        