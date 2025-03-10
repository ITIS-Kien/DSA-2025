t = int(input())
for _ in range(t) :
    n = int(input())
    a = list(map(int, input().strip().split()))
    a = sorted(a)
    for i in a :
        print(i, end=" ")
    print()