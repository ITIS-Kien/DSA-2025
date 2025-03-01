def solve (n, i):
    while n > 2 :
        if i <= f[n - 2] : n -= 2
        else : 
            i -= f[n - 2]
            n -= 1
    if n == 1 : return 'A'
    else : return 'B'

f = [0] * 94
f[1] = f[2] = 1
for i in range(3, 93): 
    f[i] = f[i - 1] + f[i - 2]
t = int(input())
while t > 0 :
    t -= 1
    n, i = map(int, input().split())
    print(solve(n, i))