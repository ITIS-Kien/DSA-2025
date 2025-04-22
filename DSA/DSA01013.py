t = int(input())
for _ in range(t):
    s = input()
    a = []
    a.append(int(s[0]))
    for i in range(1, len(s)):
        a.append((a[i - 1] + int(s[i])) % 2)
    for i in a:
        print(i, end="")
    print()