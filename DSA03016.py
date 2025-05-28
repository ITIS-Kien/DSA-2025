t = int(input())
for _ in range(t):
    s, d = map(int, input().split())
    if s > 9 * d:
        print(-1)
        continue
    a = [0] * d
    a[0] = 1
    s -= 1
    i = d - 1
    while s >= 9:
        a[i] = 9
        s -= 9
        i -= 1
    a[i] += s
    print(int("".join(map(str, a))))
