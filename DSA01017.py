t = int(input())
for _ in range(t):
    s = input()
    a = s[0]
    for i in range(1, len(s)):
        a += str((int(s[i - 1]) + int(s[i])) % 2)
    print(a)


