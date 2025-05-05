def backtrack(n, i = 0, a = []):
    if i == n:
        print(a[0], end="")
        for j in range(1, n):
            print((a[j] + a[j - 1]) % 2, end="")
        print(end=" ")
    else:
        for j in range(0, 2):
            a.append(j)
            backtrack(n, i + 1, a)
            a.pop()

t = int(input())
for _ in range(t):
    n = int(input())
    backtrack(n)
    print()
