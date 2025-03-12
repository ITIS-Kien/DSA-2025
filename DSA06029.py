n = int(input())
data = list(map(int, input().split()))
a = []
f = []
for i in range(n) :
    x = "Buoc " + str(i) + ": "
    a.append(data[i])
    a.sort()
    for it in a :
        x += str(it) + " "
    f.append(x)
while len(f) > 0 :
    x = f[-1]
    f.pop()
    print(x)