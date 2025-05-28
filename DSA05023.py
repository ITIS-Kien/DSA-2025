t = int(input())
for _ in range(t):
    s = input()
    n = len(s)
    ans = 0
    for i in range(n):
        num = 0
        for j in range(i, n):
            num = num * 10 + int(s[j])
            ans += num
    print(ans)
