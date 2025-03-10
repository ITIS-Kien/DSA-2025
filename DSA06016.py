t = int(input())
for _ in range(t) :
    m, n = map(int, input().split())
    a = list(map(int, input().strip().split()))
    b = list(map(int, input().strip().split()))
    a = sorted(a)
    b = sorted(b)
    
    print(a[0] * b[-1])