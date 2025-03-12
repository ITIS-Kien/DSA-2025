n = int(input())
odd = []
even = []
a = list(map(int, input().strip().split()))
for i in range(n):
    if (i + 1) % 2 == 0:
        even.append(a[i])
    else:
        odd.append(a[i])
odd.sort()
even.sort(reverse=True)
for i in range(1, n + 1):
    if i % 2 == 0:
        print(even[i // 2 - 1], end=" ")
    else:
        print(odd[i // 2], end=" ")