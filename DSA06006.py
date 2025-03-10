t = int(input())
for _ in range (t) : 
    n = int(input())
    a = map(int, input().strip().split())
    a = sorted(a)
    for it in a :
        print(it, end=" ")
    print()
        