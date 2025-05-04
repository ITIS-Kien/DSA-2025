t = int(input())
for _ in range(t):
    n = int(input())
    a = ["0"] * (n + 1)
    a[1] = "1"
    for i in range(2, n + 1):
        a[i] = a[i // 2] + str(i % 2)
    for i in range(1, n + 1):
        print(a[i], end=" ")
    print()