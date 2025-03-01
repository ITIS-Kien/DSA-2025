mod = 10**9 + 7

def LuyThua(n, k):
    if k == 0: return 1
    if k == 1: return n
    x = LuyThua(n, k // 2)
    res = x * x % mod
    if k % 2 == 0 : return res
    else : return (res * n) % mod

t = int(input())
while t > 0:
    n, k = map(int, input().split())
    print(LuyThua(n, k))
    t -= 1

