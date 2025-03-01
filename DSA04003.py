mod = 123456789

def LuyThua(n, k):
    if k == 0: return 1
    if k == 1: return n
    x = LuyThua(n, k // 2)
    res = x * x % mod
    if k % 2 == 0 : return res
    else : return (res * n) % mod

t = int(input())
while t > 0:
    n = int(input())
    print(LuyThua(2, n - 1))
    t -= 1

