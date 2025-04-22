t = int(input())
for _ in range(t):
    v, e = map(int, input().split())
    f = [[] for _ in range(v + 1)]
    for _ in range(e):
        x, y = map(int, input().split())
        f[x].append(y)
    for i in range(1, v + 1):
        print(f"{i}:", end=" ")
        for it in f[i]:
            print(it, end=" ")
        print()