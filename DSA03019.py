def solve(n, m):
    tmp = 0
    while True:
        if m % n == 0:
            print(f"1/{int(m / n)}")
            break
        else :
            tmp = int(m / n) + 1
            print(f"1/{tmp}", end=" + ")
            n = n * tmp - m
            m = m * tmp
            if n == 1:
                print(f"1/{m}")
                break

t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    solve(n, m)
