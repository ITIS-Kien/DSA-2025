import sys
data = sys.stdin.read().splitlines()
i = iter(data)

t = int(next(i))
while t > 0:
    n = int(next(i))
    f1 = list(map(int, next(i).split()))
    f2 = list(map(int, next(i).split()))
    f1 = sorted(f1)
    f2 = sorted(f2, reverse = True)
    sum = 0
    for j in range(n):
        sum += f1[j] * f2[j]
    sys.stdout.write(str(sum) + '\n')
    t -= 1