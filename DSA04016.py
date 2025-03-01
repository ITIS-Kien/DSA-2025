import sys

data = sys.stdin.read().splitlines()
i = iter(data)

t = int(next(i))

while t > 0 :
    m, n, k = map(int, next(i).split())
    f1 = list(map(int, next(i).split()))
    f2 = list(map(int, next(i).split()))
    f = sorted(f1 + f2)
    sys.stdout.write(str(f[k - 1]) + '\n')
    t -= 1