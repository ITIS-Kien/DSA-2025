def backtrack(n, st, a = []):
    if n == 0:
        print("(", end="")
        for j in range(len(a)):
            print(a[j], end="")
            if j == len(a) - 1:
                print(") ", end="")
            else: 
                print(" ", end="")
    else :
        for j in range(st, 0, -1):
            a.append(j)
            backtrack(n - j, min(n - j, j), a)
            a.pop()

t = int(input())
for _ in range(t):
    n = int(input())
    backtrack(n, n)
    print()


