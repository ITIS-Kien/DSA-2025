t = int(input())
for _ in range(t):
    m, n = map(int, input().split())
    a = list(map(int, input().strip().split()))
    b = list(map(int, input().strip().split()))
    a += b
    a.sort()
    print(*a)