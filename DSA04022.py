def solve (n, k) : 
    if 2 ** n == k :
        return n
    if 2 ** n > k :
        return solve(n - 1, k)
    return solve(n + 1, k - 2 ** n)

t = int(input())
for _ in range(t) : 
    n, k = map(int, input().split())
    c = solve(n, k)
    print(chr(65 + c))