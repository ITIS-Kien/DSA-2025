n = int(input())
a = []
data = list(map(int, input().split()))
for i in range(n) :
    a.append(data[i])
    a.sort()
    print("Buoc " + str(i) + ":", end=" ")
    for it in a :
        print(it, end=" ")
    print()