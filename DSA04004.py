def solve(n, k):
    l = 2 ** (n - 1)
    if k == l : return n
    if k < l : return solve(n - 1, k)
    else : return solve(n - 1, 2 * l - k)    

t = int(input())
while t > 0:
    n, k = map(int, input().split())
    print(solve(n, k))
    t -= 1

