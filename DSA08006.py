a = list()
tmp = 9
a.append(tmp)
while tmp * 10 <= 9000000999999:
    sz = len(a)
    tmp *= 10
    a.append(tmp)
    for i in range(sz):
        a.append(tmp + a[i])
t = int(input())
for _ in range(t):
    n = int(input())
    idx = 0
    while a[idx] % n != 0:
        idx += 1
    print(a[idx])